#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int main(void)
{
    dog_t *dog = new_dog("Buddy", 3.5, "Alice");
    
    if (dog)
    {
        printf("Successfully created dog:\n");
        printf("Name: %s\n", dog->name);
        printf("Age: %.1f\n", dog->age);
        printf("Owner: %s\n", dog->owner);
        
        /* Clean up */
        free(dog->name);
        free(dog->owner);
        free(dog);
    }
    else
    {
        printf("Failed to create dog\n");
    }
    
    return 0;
}
