#include "main.h"

/**
 * print_square - prints a straight line
 * @size: parameter
 * Return: nothing(void)
 */

void print_square(int size)
{
	int len;
	int space;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (space = 0; space < (size - 1); space++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
