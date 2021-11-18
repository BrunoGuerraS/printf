#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len1;
    int len2;
    //unsigned int ui;
    //void *addr;

    len1 = printf("a %% %c %s aaaaa\n", '2', "string\n"); 
    printf("%d\n", len1);
    len2 = _printf("a %% %c %s aaaaa\n", '2', "string\n"); 
    printf("%d\n", len2);
    
}
