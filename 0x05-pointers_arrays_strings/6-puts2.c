#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - print even no
 * @str: parametares for the function
 * Return: nothing
 */
void puts2(char *str)
{
	int lent;

	lent = strlen(str);

	if (lent % 2 == 0)
	{
		putchar(lent);
	}
	putchar('\n');
}
