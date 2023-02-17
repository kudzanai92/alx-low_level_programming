#include <stdio.h>
#include <unixstd.h>

/**
 * main - c program that prints a line to the standard error
 * Return: 1 successed
 */

int main(void)

{
	fput(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
