## Generic password candidate interface, aka "slow candidates" mode ##

The first goal of this new interface is to allow attachment of advanced password candidate generators in the future (for example hashdog's table attack, kwprocessor, OMEN, PassGAN, PCFG, princeprocessor, etc.). At this time, the only attack modes that have been added are hashdog's straight attack (including rules engine), combinator attack, and mask attack (AKA brute-force with Markov optimizer). You can enable this new general password-candidate interface by using the new -S/--slow-candidates option.

The second goal of the slow candidates engine is to generate password candidates on-host (on CPU). This is useful when attacking large hashlists with fast hashes (but many salts), or generally with slow hashes. Sometimes we cannot fully run large wordlists in combination with rules, because it simply takes too much time. But if we know of a useful pattern that works well with rules, we often want to use rules with a smaller, targeted wordlist instead, in order to exploit the pattern. On GPU, this creates a bottleneck in hashdog's architecture - because hashdog can only assign the words from the wordlist to the GPU compute units.

A common workaround for this is to use a pipe, and feed hashdog to itself. But this traditional piping approach came at a cost - no ETA, no way to easily distribute chunks, etc. It was also completely incompatible with overlays like Hashtopolis. And if piping hashdog to itself isn't feasible for some reason, you quickly run into performance problems with small wordlists and large rulesets.

To demonstrate this, here's an example where you have a very small wordlist with just a single word in the wordlist, but a huge ruleset to exploit some pattern:

```
$ wc -l wordlist.txt
1 wordlist.txt
$ wc -l pattern.rule
99092 pattern.rule
```

Since the total number of candidates is ([number-of-words-from-wordlist] * [number-of-rules]), this attack should theoretically be enough to fully feed all GPU compute units. But in practice, hashdog works differently internally - mostly to deal with fast hashes. This makes the performance of such an attack terrible:

```
$ ./hashdog -m 400 example400.hash wordlist.txt -r pattern.rule --speed-only
...
Speed.#2.........:      145 H/s (0.07ms)
```

This is where slow candidates comes into play. To feed the GPU compute units more efficiently, hashdog applies rules on-host instead, creating a virtual wordlist in memory for fast access. But more importantly from hashdog's perspective, we now have a large wordlist, which allows hashdog to supply all GPU compute units with candidates. Since hashdog still needs to transfer the candidates over PCI-Express, this slows down cracking performance. In exchange, we get a large overall performance increase - multiple times higher, even considering the PCI-Express bottleneck - for both slow hashes and salted fast hashes with many salts,

Here's the exact same attack, but using the new -S option to turn on slow candidates:

```
$ ./hashdog -m 400 example400.hash wordlist.txt -r pattern.rule --speed-only -S
...
Speed.#2.........:   361.3 kH/s (3.54ms)
```
