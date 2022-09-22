#include "main.h"
#include <stdio.h>

/**
 * leet - encoding a string
 * @str: argument passed
 * Return: results
 */
char *leet(char *str)
{
	int indx1 = 0, indx2, l = 5;
	char lee[5] = {'A', 'E', 'O', 'T', 'L'};
	char laa[5] = {'4', '3', '0', '7', '1'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 < l; indx2++)
		{
			if (str[indx1] == lee[indx2] ||
					(str[indx1] - 32) == laa[indx2])
				str[indx1] = laa[indx2];
		}

		indx1++;
	}

	return (str);
}
