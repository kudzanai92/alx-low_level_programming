#include <stdio.h>

/**
 * main - main fucntion
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 0; i < 10; i++)

	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);

}
