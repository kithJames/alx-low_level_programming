#include "main.h"

/**
 * _puts_recursion -> prints a recursive string
 * @s: string
 */
void
_puts_recursion(char *s);

	if (*s == '\0')
{
	putchar('\n')
	s++
}
	putchar(*s)
	_puts_recursion(s);
