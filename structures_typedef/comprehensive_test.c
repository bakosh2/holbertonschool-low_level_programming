#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - test all functions together
 *
 * Return: Always 0.
 */
int main(void)
{
    /* Test Task 2: print_dog */
    printf("=== Testing Task 2: print_dog ===\n");
    struct dog my_dog = {"Ghost", 4.75, "Jon Snow"};
    print_dog(&my_dog);

    /* Test Task 4: new_dog */
    printf("\n=== Testing Task 4: new_dog ===\n");
    dog_t *new_dog_ptr = new_dog("Ghost", 4.75, "Jon Snow");
    if (new_dog_ptr)
    {
        printf("New dog created successfully!\n");
        printf("Name: %s\n", new_dog_ptr->name);
        printf("Age: %.2f\n", new_dog_ptr->age);
        printf("Owner: %s\n", new_dog_ptr->owner);
        
        /* Verify copies were made */
        if (new_dog_ptr->name != "Ghost" && new_dog_ptr->owner != "Jon Snow")
        {
            printf("✓ String copies verified\n");
        }
        
        /* Clean up */
        free(new_dog_ptr->name);
        free(new_dog_ptr->owner);
        free(new_dog_ptr);
        printf("✓ Memory freed successfully\n");
    }

    return (0);
}
