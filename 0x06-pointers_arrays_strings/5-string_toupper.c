#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - function that compare two strings
 * @str: argument passed
 * Return: upper
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}
