#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer;
    
    // Test 1: Normal case
    buffer = create_array(10, 'A');
    if (buffer)
    {
        for (int i = 0; i < 10; i++)
            printf("%c", buffer[i]);
        printf("\n");
        free(buffer);
    }
    
    // Test 2: Size 0
    buffer = create_array(0, 'X');
    if (buffer == NULL)
        printf("NULL returned for size 0 - Correct!\n");
    
    return 0;
}
