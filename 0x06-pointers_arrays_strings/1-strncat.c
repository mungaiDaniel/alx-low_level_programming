#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * char *_strcat - function to concatentes two strings
 * @dest: first char argument
 * @src: second char argument
 * @n: most n bytes
 * Return: dest as the full string
 */
char *_strcat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
