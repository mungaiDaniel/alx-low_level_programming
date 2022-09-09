#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets == 'q')
		{
			continue;
		}
		else if (alphabets == 'e')
		{
			continue;
		}

		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}

