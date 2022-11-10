#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: bytes to allocate
 * Return: a pointer
 */
void *malloc_checked(unsigned int b);
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
