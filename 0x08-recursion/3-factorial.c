#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to find the factorial of.
 *
 * Return: if n > 0 -  the factorial al of n.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));

}
