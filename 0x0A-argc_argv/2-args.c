#include <stdio.h>
/**
 * main -  number of arguments passed into it.
 * @argc: count of command line arguments.
 * @argv:  contains the program command line arguments.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
