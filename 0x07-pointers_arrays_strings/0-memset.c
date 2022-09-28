#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
