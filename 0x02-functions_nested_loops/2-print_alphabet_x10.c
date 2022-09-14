#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alpha;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
