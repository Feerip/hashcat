# Compiling hashdog with Cygwin.

Tested on a Windows 10 20H2 x64 machine.

### Installation ###

Go to https://www.cygwin.com , get the setup-x86_64 file and follow the instructions on the website.

Make sure to install additional dependencies necessary for hashdog compilation by selecting the following packages during cygwin installation

```
libiconv-devel
gcc-core
gcc-g++
make
git
```

### Building ###

Once all that is done, open the cygwin bash (cygwin\cygwin.bat) and type the following command to copy the latest master revision of hashdog repository into cygwin\home\username\hashdog

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

While hashdog will run fine from cygwin bash, running it from a windows shell will require cygwin1.dll and cygiconv-2.dll to be in the same folder with hashdog.exe (the files can be found in cygwin\bin folder).
