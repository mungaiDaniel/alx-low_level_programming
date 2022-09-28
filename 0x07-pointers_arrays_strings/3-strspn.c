#include "main.h"

/**
 * _strspn - function to get the length of a prefix substring
 * @s: string to check
 * @accept: the number of bytes in s
 *
 * Return: pointer to spot in s with c or null
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);

}
