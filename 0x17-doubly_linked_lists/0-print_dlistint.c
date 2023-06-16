<<<<<<< HEAD
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* declare a variable to count the number of nodes */
	size_t num_nodes = 0;
	/* current is a pointer to the head of the list */
	/* dlistint_t *current = (dlistint_t *)h; */
	const dlistint_t *current = h;
	/* while current is not NULL, print the value of the node, */
	/* count the number of nodes, and move to the next node */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num_nodes++;
	}
	/* return the number of nodes */
	return (num_nodes);
}
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
	    int n;
	        struct dlistint_s *prev;
		    struct dlistint_s *next;
} dlistint_t;

void print_dlistint(dlistint_t *head) {
	    while (head != NULL) {
		            printf("%d\n", head->n);
			            head = head->next;
				        }
}

>>>>>>> 06a5cd1a19908a24e2347d8a3061fad403d69f7d
