# All of the commands that you *actually* need to know to use GDB

## How to start GDB
1. When you compile your code, make sure to include the `-g` flag to create a debuggable binary.

1. Run
```
  $ gdb ./<your_executable_name>
```

You should now be in a prompt that looks something like this (if you are on clyde, if not it will be slightly different):
```
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./<your_executable_name>...(no debugging symbols found)...done.
(gdb)
```
The last line, `(gdb)` is the prompt, just like `$` for bash or `%` for zsh. You can input commands into the prompt just like you would in the shell, but these commands are specific to the gdb program. There are many commands that gdb has for you to use and explore, and you should definitely check out the man page at `$ man gdb` in your shell, but we would like to show you the handful that are the most useful. Often these commands are a single letter long, abbreviated from the word they stand for so that it's super fast to use.

## Commands
Each of these commands will work if you type the shortened or full length name
- `r/run` - runs execution of your code, will execute as fast as you CPU can handle! Execution will only pause if a breakpoint is reached, if the end of program is reached, or if a runtime error is encountered (IE a segfault). GDB outputs a lot more information about a segfault than just telling you that it's a segfault, so highly reccomend this as a first step in figuring out where it's occurring.
- `c/continue` - This will resume execution of your code at full speed until another breakpoint is hit, if the code finishes executing, or if an error is encountered.
- `f/`
- `b/break` - This is the command that allows you to set breakpoints. It has multiple options for arguments:
  - `b N` will insert a breakpoint at line `N` of your code
  - `b +/-N` will insert a breakpoint `+/-N` lines away from the current line that you are stopped at.
  - `b fn` will insert a breakpoint at the start of function `fn`.
- `info break` will list all of your current breakpoints
-  