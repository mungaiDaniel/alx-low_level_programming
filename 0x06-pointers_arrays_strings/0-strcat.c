#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * char *_strcat - function to concatentes two strings
 * @dest: first char argument
 * @src: second char argument
 * Return: dest as the full string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];

		len += 1;
	}

	dest[len] = '\0';

	return (dest);
}
