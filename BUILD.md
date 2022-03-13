hashdog build documentation
=

### Revision ###

* 1.5

### Author ###

See docs/credits.txt

### Building hashdog for Linux and macOS ###

Get a copy of the **hashdog** repository

```
$ git clone https://github.com/hashdog/hashdog.git
```

Run "make"

```
$ make
```

### Install hashdog for Linux ###

The install target is linux FHS compatible and can be used like this:

```
$ make install
```

If the $HOME/.hashdog folder exists, then:

- Session related files go to: $HOME/.hashdog/sessions/
- Cached kernels go to: $HOME/.hashdog/kernels/
- Potfiles go to: $HOME/.hashdog/

Otherwise, if environment variable XDG_DATA_HOME and XDG_CACHE_HOME exists, then:

- Session related files go to: $XDG_DATA_HOME/hashdog/sessions/
- Cached kernels go to: $XDG_CACHE_HOME/hashdog/kernels/
- Potfiles go to: $XDG_DATA_HOME/hashdog/

Otherwise, if environment variable XDG_DATA_HOME exists, then:

- Session related files go to: $XDG_DATA_HOME/hashdog/sessions/
- Cached kernels go to: $HOME/.cache/hashdog
- Potfiles go to: $XDG_DATA_HOME/hashdog/

Otherwise, if environment variable XDG_CACHE_HOME exists, then:

- Session related files go to: $HOME/.local/share/hashdog/sessions/
- Cached kernels go to: $XDG_CACHE_HOME/hashdog/kernels/
- Potfiles go to: $HOME/.local/share/hashdog/

Otherwise:

- Session related files go to: $HOME/.local/share/hashdog/sessions/
- Cached kernels go to: $HOME/.cache/hashdog
- Potfiles go to: $HOME/.local/share/hashdog/

### Building hashdog for Windows (using Windows Subsystem for Linux) ###

Refer to [BUILD_WSL.md](BUILD_WSL.md)

### Building hashdog for Windows (using Cygwin) ###

Refer to [BUILD_CYGWIN.md](BUILD_CYGWIN.md)

### Building hashdog for Windows (using MSYS2) ###

Refer to [BUILD_MSYS2.md](BUILD_MSYS2.md)

### Building hashdog for Windows from Linux ###

```
$ make win
```

=
Enjoy your fresh **hashdog** binaries ;)
