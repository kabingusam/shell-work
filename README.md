# simple_shell
helpful links:

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

1.main.c
Entry point of the program.

2.builtins.c


3.execute.c


4.parser.c


5.env_operators.c


6.shell.h


7.man_3_simple_shell


    Authors : Kabingu Sammy.