#include <std.io>
#include "main.h"

/**
 * print_array - The function that prints array elements
 * @a: the array to be taken in the function
 * @n: total num of the elements of the arry
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf('\n');
}
