#include "variadic_functions.h"

/**
 * main - comprehensive test for print_all
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("=== Test 1: All data types ===\n");
    print_all("cifs", 'A', 42, 3.14, "Hello");
    
    printf("\n=== Test 2: NULL string ===\n");
    print_all("sis", 100, "World", NULL);
    
    printf("\n=== Test 3: Only characters ===\n");
    print_all("ccc", 'X', 'Y', 'Z');
    
    printf("\n=== Test 4: Only integers ===\n");
    print_all("iii", 1, -2, 3);
    
    printf("\n=== Test 5: Only floats ===\n");
    print_all("fff", 1.1, -2.2, 3.3);
    
    printf("\n=== Test 6: Mixed with ignored characters ===\n");
    print_all("cixfs", 'T', 99, 4.5, "Test");
    
    printf("\n=== Test 7: Empty format ===\n");
    print_all("");
    
    printf("\n=== Test 8: NULL format ===\n");
    print_all(NULL);
    
    return (0);
}
