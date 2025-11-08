#include <stdio.h>
#include "dog.h"

/**
 * main - test edge cases for print_dog
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    printf("=== Test 1: Normal case ===\n");
    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);

    printf("\n=== Test 2: NULL name ===\n");
    my_dog.name = NULL;
    my_dog.age = 2.0;
    my_dog.owner = "Alice";
    print_dog(&my_dog);

    printf("\n=== Test 3: NULL owner ===\n");
    my_dog.name = "Max";
    my_dog.age = 5.5;
    my_dog.owner = NULL;
    print_dog(&my_dog);

    printf("\n=== Test 4: NULL name and owner ===\n");
    my_dog.name = NULL;
    my_dog.age = 1.0;
    my_dog.owner = NULL;
    print_dog(&my_dog);

    printf("\n=== Test 5: NULL struct pointer ===\n");
    print_dog(NULL);
    printf("(Should print nothing above this line)\n");

    printf("\n=== Test 6: Zero age ===\n");
    my_dog.name = "Bella";
    my_dog.age = 0.0;
    my_dog.owner = "Charlie";
    print_dog(&my_dog);

    return (0);
}
