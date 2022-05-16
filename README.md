# simple_shell
Helpful links:

https://c-for-dummies.com/blog/

Very own shell.

Compilation:

``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh.``

# Testing

Your shell should work like this in interactive mode:

    $ ./hsh
    ($) /bin/ls
    hsh main.c shell.c
    ($)
    ($) exit
    $

Non-interactive mode:

    $ echo "/bin/ls" | ./hsh
    hsh main.c shell.c test_ls_2
    $
    $ cat test_ls_2
    /bin/ls
    /bin/ls
    $
    $ cat test_ls_2 | ./hsh
    hsh main.c shell.c test_ls_2
    hsh main.c shell.c test_ls_2
    $

Files contained and description:

1.Main.c

    Entry point of the program.

2.Memo.c

    Handles memeory.

3.More_string.c

    Contains functions that handle Strings.

4.More_tools.c

    Contains functions that help in better handling of characters and integers plus errors.

5.Parser.c

    Parses the command by the user.

6.Shell.h

    Contains all the macros and prototypes.

7.String.c

    Contains functions that handle Strings.

8.Task0.c

    Contains code that aims at passing all Betty tests.

9.Tools.c

    Contains functions that help in better handling of characters and integers plus errors.

10.man_3_simple_shell


*kabingu sammy* - [Github](https://github.com/kabingusam) || [Twitter](https://twitter.com/Kabingusammy)