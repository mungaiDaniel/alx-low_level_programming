#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * char *_strncpy - function to concatentes two strings
 * @dest: first char argument
 * @src: second char argument
 * @n: get most bytes
 * Return: dest as the full string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strcpy(dest, src, n);

	return (dest);
}
