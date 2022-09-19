#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @s: parametares for the function
 * Return: nothing
 */
void print_rev(char *s)
{
	int lent;

	lent = strlen(s);

	if (lent % 2 == 0)
	{
		putchar(lent);
	}
	putchar('\n');
}
