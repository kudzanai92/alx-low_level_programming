#include "main.h"

/**
 * _strchr - a function that locates a character in string
 * @s: string to search
 * @c: first and last line
 * Return: locates a string
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
