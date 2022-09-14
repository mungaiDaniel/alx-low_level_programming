#include "main.h"

/**
 * _islower - function to check lowercase character
 * @c: is the int use for argument function
 *
 * Return: Alway 0 (success)
 */
int _iislower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
