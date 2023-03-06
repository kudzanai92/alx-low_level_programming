#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @: Starting address of memory to be filled
 * @: the targeted value
 * @: num of bytes to be changed 
 * Return: changed array with new bytes
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
