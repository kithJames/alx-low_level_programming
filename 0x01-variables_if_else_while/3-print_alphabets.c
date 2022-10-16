#include <stdio.h>
/**
 * main - entry point
 * Return: zero always
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
{
	if ((letter != 101) && (letter != 113))
	{
		putchar(letter);
	}
	letter++;
	}

putchar('\n');
return (0);
}



