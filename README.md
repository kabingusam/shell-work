<p align="center">

  <img src="full_colored_light.jpg" width="400\"/>

<br>


<h1><p align="center">A simple shell.</h1></p></font>

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

1. Main.c

    Entry point of the program.

2. a_builtins.c

    Handles builtins in the shell.

3. builtin_ex.c

    Handles builtins in the shell

4. builtin_ex2.c

    Handles builtins in the shell

5. builtin.c

    Handles builtins in the shell

6. env_op.c

    Handles environment variables in shell

7. env.c

    Handles environment variables in shell

8. err_msg.c

    Handles errors in shell

9. err_msg2.c

    Handles errors in shell

10. err.c

    Handles errors in shell

11. help.c

    Handles variables in shell

12. help2.c

    Handles variables in shell

13. input_helper.c

    Handles inputs to the shell

14. linked_listop.c

    Handles linked lists in shell

15. location.c

    Handles paths in shell

16. string.c 

    Handles strings in shell

17. perm.c

    Handles file access permissions in shell

18. split.c 

    Deals with spliting of a command(delimiter).

19. string.c 

    Handles strings in shell

20. task0.c


21. man_3_simple_shell


*kabingu sammy* - [Github](https://github.com/kabingusam) || [Twitter](https://twitter.com/Kabingusammy)