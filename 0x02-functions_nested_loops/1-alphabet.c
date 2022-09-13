#include <stdio.h>

/**
 * main - alphabets in lowercases
 * description: function void prints lower cases 
 *
 * Return: Always 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
}
