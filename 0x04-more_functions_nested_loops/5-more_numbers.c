#include "main.h"

/**
 * more_num - print 0 - 14 ten times
 * you can use  put 3 times
 *
 * Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int a, b, c;

	for (b = 1; b <= 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			a = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				a = c % 10;
			}
			_putchar(a + 48);
		}
		_putchar('\n');
	}
}
