#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: int
*/

int _strlen_recursion(char *s)
{
int a = 0;

if (*s > '\0')
{
	a += _strlen_recursion(s + 1) + 1;
}

return (a);
}
