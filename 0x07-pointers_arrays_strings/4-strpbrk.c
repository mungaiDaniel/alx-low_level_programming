#include "main.h"

/**
 * _strpbrk - function to search a string for any of a set of byte
 * @s: string to check
 * @accept: the number of bytes in s
 *
 * Return: pointer to spot in s with c or null
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');

}
