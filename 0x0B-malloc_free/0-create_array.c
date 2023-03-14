#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - fucntion that creats array of chars
 * @size: array size
 * @c: char
 * Return: Null if size is zero or if it fails
 * or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	pointer = (char *) malloc(size * sizeof(char));
	if (size == 0 || pointer == NULL)
		return (NULL);

			for (i = 0; i < size; i++)
				pointer[i] = c;
	return (pointer);
}
