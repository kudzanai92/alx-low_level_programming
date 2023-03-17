#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of element in the array
* @size: byte size of every element
*
* Return: pointer to array, NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *n.arr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	n.arr = malloc((size) * (nmemb));
	if (n.arr == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		n.arr[i] = '\0';
	}
	return (n.arr);
}
