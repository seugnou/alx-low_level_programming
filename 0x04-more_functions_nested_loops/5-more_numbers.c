#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, rom 0 to 14,
 * followed by new line
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j = 0;

	for (j = 0; j < 10; j++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		i++;

		}
	_putchar('\n');
	}
}


