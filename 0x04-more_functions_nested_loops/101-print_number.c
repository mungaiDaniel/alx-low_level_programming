#include "main.h"

/**
 * print_number - prints number
 * @n: checks the number
 * Return: nothing(void)
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');

}
