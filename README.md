This is the readme file of the simple\_shell repo for the project 0x16. C - Simple Shell. 
  
  

**SIMPLE SHELL, HSH**

Like the Bourne Again Shell, `bash`, with path `bin/bash`, or
Bourne Shell, `sh`, with path `bin/sh`,
our Simple Shell is named `hsh`, with path `./hsh`.

It is compiled using:

	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

and tested using:

	./hsh

in interactive mode, and

	cat test_ls_2 | ./hsh

in non-interative mode.

The test output should be:

	($) /bin/ls
	hsh main.c shell.c
	($)
	($) exit

in interactive mode, and

	hsh main.c shell.c test_ls_2
	hsh main.c shell.c test_ls_2

in non-interactive mode.
