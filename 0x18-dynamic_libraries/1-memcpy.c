#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory where is going to be stored
 * @src: this is the source where the memory is being copied
 * @n: num of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
			n--;
	}
	return (dest);
}
