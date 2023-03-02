#include "main.h"

/**
 * *string_toupper - change all lowercase letters of a string to uppercase.
 * @s: input string
 * Return: to the pointer to dest
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
