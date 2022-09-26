#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - print even
 * @str: parametares for the function
 * Return: lent
 */
void puts_half(char *str)
{
	int x, i, y;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	putchar('\n');


}
