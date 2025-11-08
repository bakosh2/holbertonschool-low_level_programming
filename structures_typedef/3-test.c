#include <stdio.h>
#include "dog.h"

/**
 * main - test both struct dog and dog_t
 *
 * Return: Always 0.
 */
int main(void)
{
    /* Test with original struct dog */
    struct dog dog1;
    dog1.name = "Max";
    dog1.age = 2.5;
    dog1.owner = "Alice";
    printf("Struct dog: %s, %.1f years, owned by %s\n", 
           dog1.name, dog1.age, dog1.owner);

    /* Test with new typedef dog_t */
    dog_t dog2;
    dog2.name = "Bella";
    dog2.age = 4.0;
    dog2.owner = "Charlie";
    printf("dog_t: %s, %.1f years, owned by %s\n", 
           dog2.name, dog2.age, dog2.owner);

    /* Test that they are compatible */
    struct dog *ptr1 = &dog1;
    dog_t *ptr2 = &dog2;
    
    printf("\nCompatibility test:\n");
    printf("Size of struct dog: %lu\n", sizeof(struct dog));
    printf("Size of dog_t: %lu\n", sizeof(dog_t));
    printf("Sizes are equal: %s\n", 
           sizeof(struct dog) == sizeof(dog_t) ? "Yes" : "No");

    return (0);
}
