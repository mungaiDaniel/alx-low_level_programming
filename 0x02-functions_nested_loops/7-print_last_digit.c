#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: is the int use for argument function
 *
 * Return: Alway 0 (success)
 */
int print_last_digit(int n)
{
	int num;

	num = (n % 10);
	if (num < 0)
	{
		num *= -1;
	}

	_putchar(num + '0');
	return (num);
}
