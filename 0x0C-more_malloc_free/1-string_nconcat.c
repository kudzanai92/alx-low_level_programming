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
	unsigned int i, j, ln1, ln2;
	char *concstr;

	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ln1 = (int)strln(s1);
	ln2 = (int)strln(s2);
	if (n > ln2)
		n = ln2;

	concstr = malloc(sizeof(char) * (ln1 + n + 1));

	if (concstr == NULL)
		return (NULL);
	for (i = 0; i < ln1; i++)
	{
		concstr[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		concstr[j] = s2[i];
		j++;
	}
	concstr[j] = '\0';

	return (concstr);
}
