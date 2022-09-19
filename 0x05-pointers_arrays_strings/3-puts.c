#include "main.h"

/**
 * _puts - this is a function
 * @str: a param to _puts function
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
