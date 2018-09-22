/* ************************************************************
 * FILENAME:  eascape.c
 * AUTHOR: Joonsuu Park
 * DESCRIPTION:    
 *        Solution for excercise 02, Chapter 01
 * CREATED ON Thu Sep 20 2018
 * Copyright (c) 2018 JoonsuuPark
************************************************************ */
#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("hello, world\n");   /* new line */
    printf("hello, world\t");   /* Vertical Tab */
    printf("hello, world\\");   /* Backslash */
    printf("hello, world\"");   /* Double Quote */
    printf("hello, world\'");   /* Single Quote */
    return 0;
}
