#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

/**
 * malloc_checked - function to allocates memory using malloc
 * @b: number of memory to be allocated
 * Return: pointer or return 98 if fail
 */

void *malloc_checked(unsigned int b)
{
	void *aaa = malloc(b);

	if (aaa == NULL)
		exit(98);

	return (aaa);
}
