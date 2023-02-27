#include "main.h"

/**
 * puts2 - the fucntion that prints other evry character of string
 * @str: The string to be taken into the function
 */

void puts2(char *str)
{
	int ln = 0, i = 0, j;
	char *str_v != '0';

	while (*str_v != '\0')
	{
		str_v++;
		ln++;
	}
	i + ln - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
