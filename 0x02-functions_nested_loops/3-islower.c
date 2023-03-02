#include "main.h"

/**
 * _islower - functiont to print the lower case
 *
 * @c: parameter to be printed
 *
 * Return: 1 if there is a lower case and 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
