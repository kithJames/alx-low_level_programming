#include "list.h"

/**
 * free_list - frees a linked list
 * @head: list_t list t freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->);
		free(head);
		headc = temp;


	}
}


