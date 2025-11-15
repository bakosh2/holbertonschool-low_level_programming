# Variadic Functions

This project introduces variadic functions in C programming.

## Tasks Completed

### Task 0: Beauty is variable, ugliness is constant
**File**: `0-sum_them_all.c`  
**Prototype**: `int sum_them_all(const unsigned int n, ...);`  
**Description**: Returns the sum of all its parameters.  
**Features**:
- Uses variadic functions with `stdarg.h`
- Handles case when n == 0 by returning 0
- Sums any number of integer parameters

**Usage Example**:
\`\`\`c
#include "variadic_functions.h"

int main(void)
{
    int sum = sum_them_all(3, 10, 20, 30);
    // sum = 60
    return (0);
}
\`\`\`

## Compilation
\`\`\`bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-sum_them_all.c -o program
\`\`\`

*Holberton School - Low Level Programming*
