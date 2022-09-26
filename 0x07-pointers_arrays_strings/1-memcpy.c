#include "main.h"

/**
 * _memcpy - copies a memory area
 * @src: memory are to be copied from
 * @dest: memory area to copy to
 * @n: number of bytes to be used
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
