#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the destnation, the string to be concatenated
 * @s2: the source, the string to concatenate
 * @n: specify how many bytes needed to concatenate s1 and s2.
 * Return: if n >= s2 the string to be concatenated,
 * either s1 or s2 = NULL the string shall be NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *newstr;

	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = (int)strlen(s1);
	len2 = (int)strlen(s2);
	if (n > len2)
		n = len2;

	newstr = malloc(sizeof(char) * (len1 + n + 1));

	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		newstr[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		newstr[j] = s2[i];
		j++;
	}
	newstr[j] = '\0';

	return (newstr);
}
