#include "lists.h"

/**
 * print_dlistint - description
 * Description: long desc
 * @h: double linked list pointer
 * Return: return
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count;

	current = (dlistint_t *) h;
	count = 0;
	while (current)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
