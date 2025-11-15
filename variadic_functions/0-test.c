#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int sum;
    
    printf("=== Test 1: Normal case ===\n");
    sum = sum_them_all(3, 10, 20, 30);
    printf("Sum: %d\n", sum);
    
    printf("\n=== Test 2: Zero parameters ===\n");
    sum = sum_them_all(0);
    printf("Sum: %d\n", sum);
    
    printf("\n=== Test 3: Negative numbers ===\n");
    sum = sum_them_all(5, -1, -2, -3, 10, 20);
    printf("Sum: %d\n", sum);
    
    printf("\n=== Test 4: Single parameter ===\n");
    sum = sum_them_all(1, 100);
    printf("Sum: %d\n", sum);
    
    return (0);
}
