#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: Prints the contents of a struct dog.
 * If any element is NULL, prints (nil) instead.
 * If d is NULL, prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* Print name with nil check */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* Print age - no need for nil check since age is float */
	printf("Age: %f\n", d->age);

	/* Print owner with nil check */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
