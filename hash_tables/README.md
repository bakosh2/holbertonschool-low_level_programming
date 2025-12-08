hash_table_create Function

The hash_table_create function is responsible for initializing a new hash table.
It takes the desired size of the hash table as an argument and performs the following steps:

Validates the size

Returns NULL if the size is zero.

Allocates memory for the hash table structure

Creates a hash_table_t structure that holds the size and array pointer.

Allocates memory for the array of buckets

Each bucket is a pointer to hash_node_t.

If allocation fails, the function frees any previously allocated memory and returns NULL.

Initializes all buckets to NULL

Ensures the hash table starts empty with no nodes linked yet.

Returns a pointer to the newly created hash table

If all allocations succeed.

This function prepares the hash table for use in later operations such as inserting, retrieving, or deleting key-value pairs.
