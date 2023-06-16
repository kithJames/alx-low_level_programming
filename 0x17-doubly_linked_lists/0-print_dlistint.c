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

