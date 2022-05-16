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

1.Main.c

    Entry point of the program.

2.Memo.c


3.More_string.c


4.More_tools.c


5.Parser.c


6.Shell.h


7.String.c


8.Task0.c


9.Tools.c


10.man_3_simple_shell


Authors : Kabingu Sammy.