#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9 except 2 and 4
 * Return: nothing(void)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 2)
		{
			continue;
		}
		if (i == 4)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}