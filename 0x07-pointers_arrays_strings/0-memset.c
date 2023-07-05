#include "main.h"

/**
 * _memset -file memeory with constant byte.
 * @s: p to put constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}
