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

	while (lent--)
		putchar(*(s + lent));
	putchar('\n');
}
