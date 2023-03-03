#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: parameter to be printed
 * Return: 1 if there is a lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
