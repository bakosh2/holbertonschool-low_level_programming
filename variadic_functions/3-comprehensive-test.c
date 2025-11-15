#include "variadic_functions.h"

int main(void)
{
    printf("=== Test 1: fcsi with numbers ===\n");
    print_all("fcsi", 3.14435, 'H', "#Cisfun", 0);
    
    printf("\n=== Test 2: Long format with ignored chars ===\n");
    print_all("mnbvfqcepolsbxzi", 3.14435, 'H', "#Cisfun", 0);
    
    printf("\n=== Test 3: Only ignored characters ===\n");
    print_all("qwertyuopadghjklzxvbnm");
    
    printf("\n=== Test 4: Empty format ===\n");
    print_all("");
    
    printf("\n=== Test 5: NULL format ===\n");
    print_all(NULL);
    
    printf("\n=== Test 6: NULL string ===\n");
    print_all("fcsi", 3.14435, 'H', NULL, 402);
    
    return (0);
}
