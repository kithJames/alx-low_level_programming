<<<<<<< HEAD
 Could not resolve hostname https: Name or service not known

=======
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
>>>>>>> 5d96aa428b16320d6babb7b9c287265db4436cbc
