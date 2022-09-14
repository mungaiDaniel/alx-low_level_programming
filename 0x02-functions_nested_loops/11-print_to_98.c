#include "main.h"

/**
 * print_to_98 - prints all natural numbers from input to 98
 * @n: the number to begin counting
 *
 * Return 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}

