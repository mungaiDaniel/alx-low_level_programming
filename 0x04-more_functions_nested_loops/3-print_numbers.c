#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * Return: nothing(void)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		putchar(i);
	}
	putchar(10);
}
