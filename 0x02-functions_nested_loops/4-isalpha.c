#include "main.h"

/**
 * _isalpha - fucntion that checks alphabets
 *
 * Return: 1 if it is an alphabet
 * or 0 otherwise
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && <= 90))
		return (1);
	else
		return (0);
}
