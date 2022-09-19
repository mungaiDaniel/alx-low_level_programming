#include "main.h"
#include <stdio.h>

/**
 * _puts - this is a function
 * @str: a param to _puts function
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
