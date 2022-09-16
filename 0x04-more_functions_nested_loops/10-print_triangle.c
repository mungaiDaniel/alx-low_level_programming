#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:size of  parameter
 * Return: nothing(void)
 */

void print_triangle(int size)
{
	int len;
	int space;

	if (size > 0)
	{
		for (len = 0; len <= size; len++)
		{
			for (space = size - len; space > 0; space--)
			{
				_putchar(' ');
			}
			for (space = 0; space < len; space++)
			{
				_putchar('#');
			}

			if (len == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
