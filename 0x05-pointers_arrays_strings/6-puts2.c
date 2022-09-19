#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - print even
 * @str: parametares for the function
 * Return: lent
 */
void puts2(char *str)
{
	int lent, i;

	lent = strlen(str);
	for (i = 0; i < lent; i += 2)
		putchar(str[i]);
	putchar('\n');


}
