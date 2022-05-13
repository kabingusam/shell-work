#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "shell.h"

//print to the screen

void print_prompt1(void)
{
    printf( "$ ");
}

void print_prompt2(void)
{
    printf( "> ");
}