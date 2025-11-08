#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - comprehensive test for new_dog
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *dog1, *dog2, *dog3;

    printf("=== Test 1: Normal case ===\n");
    dog1 = new_dog("Max", 2.5, "Alice");
    if (dog1)
    {
        printf("Created: %s, %.1f years, owned by %s\n", 
               dog1->name, dog1->age, dog1->owner);
        free(dog1->name);
        free(dog1->owner);
        free(dog1);
    }

    printf("\n=== Test 2: Empty strings ===\n");
    dog2 = new_dog("", 0.0, "");
    if (dog2)
    {
        printf("Created: '%s', %.1f years, owned by '%s'\n", 
               dog2->name, dog2->age, dog2->owner);
        free(dog2->name);
        free(dog2->owner);
        free(dog2);
    }

    printf("\n=== Test 3: Long strings ===\n");
    dog3 = new_dog("Rex The Amazing Super Dog", 7.5, "Johnathan Christopher Smith");
    if (dog3)
    {
        printf("Created: %s, %.1f years, owned by %s\n", 
               dog3->name, dog3->age, dog3->owner);
        free(dog3->name);
        free(dog3->owner);
        free(dog3);
    }

    printf("\n=== Test 4: Memory allocation failure simulation ===\n");
    /* This would normally require more complex testing */
    printf("Memory management should be tested with valgrind\n");

    return (0);
}
