#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	printf("Enter a random number:\n ");
	scanf("%d\n", &n);

	if (n > 0)

	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)

	{
		printf("%d is negative\n", n);
	}
	else

	{
		printf("%d is zero\n", n);
	}

	return (0);
}
