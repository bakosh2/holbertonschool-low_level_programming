#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to dog to free
 *
 * Description: Frees the memory allocated for a dog structure,
 * including the copies of name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the copied strings */
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);

	/* Free the dog structure itself */
	free(d);
}
