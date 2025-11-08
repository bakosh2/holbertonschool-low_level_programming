#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    /* Test 1: Normal allocations */
    c = malloc_checked(sizeof(char) * 1024);
    printf("Char array: %p\n", (void *)c);
    
    i = malloc_checked(sizeof(int) * 402);
    printf("Int array: %p\n", (void *)i);
    
    f = malloc_checked(sizeof(float) * 100);
    printf("Float array: %p\n", (void *)f);
    
    d = malloc_checked(sizeof(double) * 50);
    printf("Double array: %p\n", (void *)d);
    
    /* Free memory */
    free(c);
    free(i);
    free(f);
    free(d);
    
    printf("All allocations successful!\n");
    return (0);
}
