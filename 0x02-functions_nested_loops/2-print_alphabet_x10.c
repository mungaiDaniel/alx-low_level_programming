#include "main.h"

/**
 * print_alphabet - function to print abc
 *
 * Return: Always 0
 */

void print_alphabe_x10(void)
{
	int alpha;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
