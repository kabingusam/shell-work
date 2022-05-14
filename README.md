# simple_shell
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

# main.c
Entry point of the program.

# builtins.c


# execute.c


# parser.c


# env_operators.c


# shell.h



    Authors : Kabingu Sammy.