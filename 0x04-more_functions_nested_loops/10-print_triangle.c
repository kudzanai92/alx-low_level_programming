#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: of triangle
 */

void print_triangle(int size);
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = i; j <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}

	}
}
