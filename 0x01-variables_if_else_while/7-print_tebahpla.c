#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}

