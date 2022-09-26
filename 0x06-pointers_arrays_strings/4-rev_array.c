#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - function that reverses an array
 * @a: array
 * @n: number of element in an array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
