#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:size of  parameter
 * Return: nothing(void)
 */

void print_triangle(int size)
{


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int len;
		int space;

		for (len = 1; len <= size; len++)
		{
			for (space = len; space < size; space++)
			{
				_putchar(' ');
			}
			for (space = 1; space <= len; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
