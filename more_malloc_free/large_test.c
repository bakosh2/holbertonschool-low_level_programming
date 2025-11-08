#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    void *huge;
    
    /* Try to allocate a very large amount of memory */
    huge = malloc_checked(INT_MAX);
    printf("Large allocation: %p\n", (void *)huge);
    free(huge);
    
    return (0);
}
