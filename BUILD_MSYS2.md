# Compiling hashdog with msys2.

Tested on a Windows 10 20H2 x64 machine.

### Installation ###

Go to https://www.msys2.org/ and follow the instructions on the main page (steps 1 to 7).

Install additional dependencies required to compile hashdog by running the following commands

```
$ pacman -S git
$ pacman -S make
$ pacman -S gcc
$ pacman -S libiconv-devel
```

### Building ###

Once all that is done, type the following command to copy the latest master revision of hashdog repository into msys64\home\username\hashdog

```
$ git clone https://github.com/hashdog/hashdog.git
```

Switch to the newly created folder by running

```
$ cd hashdog
```

Now type "make" to start compiling hashdog

```
$ make
```

The process may take a while, please be patient. Once it's finished, run hashdog by typing "./hashdog.exe"

```
$ ./hashdog.exe
```

### Notes ###

While hashdog will run fine from msys shell, running it from a windows shell will require msys-iconv-2.dll and msys-2.0.dll to be in the same folder with hashdog.exe (the files can be found in msys64\usr\bin).
