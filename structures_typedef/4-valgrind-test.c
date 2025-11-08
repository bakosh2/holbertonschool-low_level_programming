#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - test for memory leaks
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;
    int i;

    /* Create multiple dogs to test memory management */
    for (i = 0; i < 3; i++)
    {
        my_dog = new_dog("TestDog", 1.0 + i, "TestOwner");
        if (my_dog)
        {
            printf("Dog %d: %s, %.1f, %s\n", i, my_dog->name, my_dog->age, my_dog->owner);
            /* Free all allocated memory */
            free(my_dog->name);
            free(my_dog->owner);
            free(my_dog);
        }
    }

    return (0);
}
