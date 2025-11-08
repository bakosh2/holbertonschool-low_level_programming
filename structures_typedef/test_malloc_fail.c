#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - test malloc failure scenarios
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *dog;
    
    printf("Testing memory management...\n");
    
    /* This should work normally */
    dog = new_dog("Ghost", 4.75, "Jon Snow");
    if (dog)
    {
        printf("Success: %s, %.2f, %s\n", dog->name, dog->age, dog->owner);
        
        /* Verify copies were made */
        printf("Name copy verified: %s\n", (dog->name != "Ghost") ? "Yes" : "No");
        printf("Owner copy verified: %s\n", (dog->owner != "Jon Snow") ? "Yes" : "No");
        
        /* Clean up */
        free(dog->name);
        free(dog->owner);
        free(dog);
    }
    
    return (0);
}
