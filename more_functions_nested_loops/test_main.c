#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    
    /* Test edge cases */
    c = 'Z';
    printf("%c: %d\n", c, _isupper(c));
    c = 'z';
    printf("%c: %d\n", c, _isupper(c));
    c = '0';
    printf("%c: %d\n", c, _isupper(c));
    c = '@';
    printf("%c: %d\n", c, _isupper(c));
    
    return (0);
}
