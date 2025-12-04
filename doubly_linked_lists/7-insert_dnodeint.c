#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to pointer to head
 * @idx: index to insert at
 * @n: value for the new node
 *
 * Return: address of new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* Insert at beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	/* Traverse until the position before idx */
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* If index is out of range */
	if (current == NULL)
		return (NULL);

	/* Insert at end */
	if (current->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));

	/* Insert in the middle */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	current->next->prev = new;
	current->next = new;

	return (new);
}

