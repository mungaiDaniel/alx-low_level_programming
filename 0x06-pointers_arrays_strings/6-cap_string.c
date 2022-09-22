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
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				index == 0)
			str[index]++;
		index++;
	}

	return (str);
}
