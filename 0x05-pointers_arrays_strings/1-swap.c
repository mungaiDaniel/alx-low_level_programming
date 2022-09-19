#include "main.h"

/**
 * swap_int - value to points to 98
 * @a: parametares of the function
 * @b: parametares of the function
 * Return: nothing(void)
 */

void swap_int(int *a, int *b)
{
	int apt = *a;

	*a = *b;
	*b = apt;
}
