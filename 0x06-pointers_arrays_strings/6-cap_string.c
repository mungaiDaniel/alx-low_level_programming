#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: argument passed
 * Return: capitalized
 */
char *cap_string(char *str)
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
