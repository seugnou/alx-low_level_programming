#include "main.h"
#include <stdio.h>
/**
 * more_numbers - a function that prints 10 times the numbers,from 0-14
 * Return: Always 0
 */

void more_numbers(void)
{
	int i,j;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i <= 14)
		{
			if (j >= 10)
			{
				_putchar(i / 10 + '0');
			}

				_putchar(i % 10 + '0');
			i++;

		}
	_putchar('\n');
	}
}
