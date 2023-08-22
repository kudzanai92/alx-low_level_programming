#include <stdio.h>

/**
 * _isupper - check if a letter is upper case
 * @X: the number to be checked
 *
 * Return: 1 for upper letter and 0 for otherwise
 */

int _isupper(int X)
{
	if (X >= 65 && X <= 90)
	{
	return (1);
	}
	return (0);
}
