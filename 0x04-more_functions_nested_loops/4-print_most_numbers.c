#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - It's a function that prints the numbers, from 0 to 9
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i < 10; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i + '0');
	}
	_putchar('\n');
}
