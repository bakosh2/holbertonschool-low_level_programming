# C - Even more pointers, arrays and strings

This project explores advanced concepts in C programming including pointers to pointers, multidimensional arrays, and string manipulation functions.

## Tasks

### 0. memset - Completed ✅
**File**: `0-memset.c`  
**Prototype**: `char *_memset(char *s, char b, unsigned int n);`  
**Description**: Fills the first `n` bytes of memory with constant byte `b`.

### 1. memcpy
**File**: `1-memcpy.c`  
**Prototype**: `char *_memcpy(char *dest, char *src, unsigned int n);`  
**Description**: Copies `n` bytes from memory area `src` to memory area `dest`.

### 2. strchr
**File**: `2-strchr.c`  
**Prototype**: `char *_strchr(char *s, char c);`  
**Description**: Locates the first occurrence of character `c` in string `s`.

### 3. strspn
**File**: `3-strspn.c`  
**Prototype**: `unsigned int _strspn(char *s, char *accept);`  
**Description**: Gets the length of a prefix substring containing only accepted characters.

### 4. strpbrk
**File**: `4-strpbrk.c`  
**Prototype**: `char *_strpbrk(char *s, char *accept);`  
**Description**: Searches a string for any of a set of bytes.

### 5. strstr
**File**: `5-strstr.c`  
**Prototype**: `char *_strstr(char *haystack, char *needle);`  
**Description**: Finds the first occurrence of substring `needle` in string `haystack`.

## Project Structure
```
holbertonschool-low_level_programming/
└── more_pointers_arrays_strings/
    ├── 0-memset.c
    ├── 1-memcpy.c
    ├── 2-strchr.c
    ├── 3-strspn.c
    ├── 4-strpbrk.c
    ├── 5-strstr.c
    ├── main.h
    └── README.md
```

## Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c [task-file].c -o program
```

## Current Progress
- ✅ Task 0: memset - Completed and pushed to GitHub
- ❌ Task 1: memcpy - Pending
- ❌ Task 2: strchr - Pending  
- ❌ Task 3: strspn - Pending
- ❌ Task 4: strpbrk - Pending
- ❌ Task 5: strstr - Pending

*This project is part of the Holberton School curriculum.*
