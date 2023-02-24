#include "main.h"

/**
 * print_numbers - Print num from 0 utpo 9
 * Return: void
 */

void print_numbers(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
