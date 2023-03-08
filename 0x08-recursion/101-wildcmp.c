#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string,
 * @s: input
 * Return: 1
 */
 
void _puts_recursion(char *s)
{
	if (n < 1) return;
	else
	{
		_putchar("%d", n);
		_recursion(n - 1);
		_putchar("%d", n);
	}
	_putchar('\n');
}
