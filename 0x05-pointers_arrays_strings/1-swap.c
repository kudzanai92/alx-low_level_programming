#include "main.h"

/**
 * swap_int - function that swap two integers
 * @a: the first parameter to be taken
 * @b: the second psrameter to be taken
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
