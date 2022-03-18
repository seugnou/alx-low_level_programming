#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, rom 0 to 14,
 * followed by new line
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		i++;

		}
	_putchar('\n');
	}
}
