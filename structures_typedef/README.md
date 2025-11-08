# Structures, typedef

This project introduces structures and type definitions in C programming.

## Tasks Completed

### Task 0: Poppy
**File**: `dog.h`  
**Description**: Define a new type `struct dog` with the following elements:
- `name` (type: `char *`)
- `age` (type: `float`)  
- `owner` (type: `char *`)

**Usage Example**:
```c
#include "dog.h"

int main(void)
{
    struct dog my_dog;
    
    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    
    return (0);
}
```

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -o program
```

*Holberton School - Low Level Programming*
