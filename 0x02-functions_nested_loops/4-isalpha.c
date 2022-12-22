#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input to be checked
 * Return: 1 if input is an alphabet,
 * otherwise, 0
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
