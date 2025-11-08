# More malloc, free

This project contains advanced C programming tasks focusing on dynamic memory allocation with error handling.

## Task 0: malloc_checked
**File**: `0-malloc_checked.c`  
**Prototype**: `void *malloc_checked(unsigned int b);`  
**Description**: Allocates memory using malloc with built-in error checking.  
**Features**: 
- Allocates `b` bytes using `malloc`
- Returns pointer to allocated memory on success
- Terminates program with exit status 98 if `malloc` fails
- Eliminates the need for NULL checks after every allocation

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-malloc_checked.c -o program
```

*Holberton School - Low Level Programming*
