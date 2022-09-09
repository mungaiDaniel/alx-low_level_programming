#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabets;

	for (alphabets = 48; alphabets < 58; alphabets++)
	{

		putchar (alphabets);

		if (alphabets == 58)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar ('\n');

	return (0);
}

