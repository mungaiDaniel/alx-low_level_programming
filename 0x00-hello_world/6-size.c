#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char a;
	int i;
	long int l;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(b));
	printf("Size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}

