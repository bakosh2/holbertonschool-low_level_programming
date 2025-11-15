# Function Pointers

This project introduces function pointers in C programming.

## Tasks Completed

### Task 0: What's my name
**File**: `0-print_name.c`  
**Prototype**: `void print_name(char *name, void (*f)(char *));`  
**Description**: Prints a name using a function pointer.

### Task 1: Array Iterator  
**File**: `1-array_iterator.c`  
**Prototype**: `void array_iterator(int *array, size_t size, void (*action)(int));`  
**Description**: Executes a function on each element of an array.

### Task 2: int_index
**File**: `2-int_index.c`  
**Prototype**: `int int_index(int *array, int size, int (*cmp)(int));`  
**Description**: Searches for an integer in an array using a comparison function.

## Compilation
\`\`\`bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c [task-file].c -o program
\`\`\`

## Examples
**Compile Task 0:**
\`\`\`bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_name.c -o program
\`\`\`

**Compile Task 1:**
\`\`\`bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-array_iterator.c -o program
\`\`\`

**Compile Task 2:**
\`\`\`bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-int_index.c -o program
\`\`\`

*Holberton School - Low Level Programming*
