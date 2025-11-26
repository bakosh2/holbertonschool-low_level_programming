_printf Project

Description
A custom implementation of the printf function in C, part of the Holberton School curriculum. This function produces output according to a format and handles basic conversion specifiers.

Prototype
int _printf(const char *format, ...);

Features
Handles the following conversion specifiers:

%c - Prints a single character

%s - Prints a string of characters

%% - Prints a literal percent sign


Return Value
Returns the number of characters printed (excluding the null byte used to end output to strings)

Returns -1 if an error occurs


Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf



Usage Examples
#include "main.h"

int main(void)
{
    int count;
    
    count = _printf("Hello %s!\n", "World");
    _printf("Printed %d characters\n", count);
    
    count = _printf("Character: %c\n", 'A');
    _printf("Printed %d characters\n", count);
    
    count = _printf("Percent: %%\n");
    _printf("Printed %d characters\n", count);
    
    return (0);
}


Output:

Hello World!
Printed 13 characters
Character: A
Printed 13 characters
Percent: %
Printed 11 characters


Project Structure

holbertonschool-printf/
├── main.h          # Header file with function prototypes
├── _printf.c       # Main _printf function
├── functions.c     # Helper functions for specifiers
├── main.c          # Test cases
└── README.md       # Project documentation

