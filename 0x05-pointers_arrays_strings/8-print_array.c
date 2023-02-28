#include <stdio.h>
#include "main.h"

/**
 * print_array - The function that prints array elements
 * @a: the array to be taken in the function
 * @n: total num of the elements of the arry
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
