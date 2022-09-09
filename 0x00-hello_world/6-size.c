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
	long l;
	long long b;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld bytes(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(b));
	printf("Size of a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}

