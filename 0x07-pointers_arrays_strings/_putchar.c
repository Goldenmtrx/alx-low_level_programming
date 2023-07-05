#include <unistd.h>

/**
 * _putchar : - writes the char c to stdout
 * @c: the char to print 
 *
 * Return: on success1.
 * on error, -1 is returned, and ernno
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}