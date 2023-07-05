#include "main.h"

/**
 * _menset -file memeory with constant byte
 * REtern ; pointer
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
