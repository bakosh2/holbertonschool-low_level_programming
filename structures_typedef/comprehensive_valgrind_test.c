#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - comprehensive valgrind test
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *dog1, *dog2;
    
    /* Test 1: Normal case */
    printf("=== Test 1: Normal allocation ===\n");
    dog1 = new_dog("Ghost", 4.75, "Jon Snow");
    if (dog1)
    {
        printf("Dog: %s, Age: %.2f, Owner: %s\n", dog1->name, dog1->age, dog1->owner);
        free(dog1->name);
        free(dog1->owner);
        free(dog1);
    }
    
    /* Test 2: Empty strings */
    printf("\n=== Test 2: Empty strings ===\n");
    dog2 = new_dog("", 0.0, "");
    if (dog2)
    {
        printf("Dog: '%s', Age: %.1f, Owner: '%s'\n", dog2->name, dog2->age, dog2->owner);
        free(dog2->name);
        free(dog2->owner);
        free(dog2);
    }
    
    /* Test 3: Verify string copies */
    printf("\n=== Test 3: Verify string copies ===\n");
    char test_name[] = "TestName";
    char test_owner[] = "TestOwner";
    dog_t *dog3 = new_dog(test_name, 1.0, test_owner);
    if (dog3)
    {
        /* Modify original strings to verify copies were made */
        test_name[0] = 'X';
        test_owner[0] = 'Y';
        printf("Original modified to: %s, %s\n", test_name, test_owner);
        printf("Dog still has: %s, %s\n", dog3->name, dog3->owner);
        
        free(dog3->name);
        free(dog3->owner);
        free(dog3);
    }
    
    return (0);
}
