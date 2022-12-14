#include "main.h"

/**
 * jack_bauer - function that prints every minute ot the day
 *
 * n from 00:00 to 23:59 , min loops count,while loops counts hours
 * and resets mins
 *
 * Return: Alway 0 (success)
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;
	int hour_rem;
	int min_rem;

	while (hour <= 23)
	{
		while (min <= 59)
		{
			min_rem = min % 10;
			hour_rem = hour % 10;
			_putchar(hour / 10 + '0');
			_putchar(hour_rem + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_rem + '0');
			min++;
			_putchar('\n');
		}
		hour++;
		min = 0;
	}
}
