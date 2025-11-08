#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *n, *o;
    int i, nl = 0, ol = 0;

    if (!name || !owner) 
        return (NULL);

    while (name[nl]) nl++;
    while (owner[ol]) ol++;

    d = malloc(sizeof(dog_t));
    if (!d) 
        return (NULL);

    n = malloc(nl + 1);
    if (!n)
    {
        free(d);
        return (NULL);
    }
    
    o = malloc(ol + 1);
    if (!o)
    {
        free(n);
        free(d);
        return (NULL);
    }

    for (i = 0; i <= nl; i++)
        n[i] = name[i];
    
    for (i = 0; i <= ol; i++)
        o[i] = owner[i];
    
    d->name = n;
    d->age = age;
    d->owner = o;
    
    return (d);
}
