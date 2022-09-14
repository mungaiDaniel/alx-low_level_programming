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

	_putchar(num);
}
