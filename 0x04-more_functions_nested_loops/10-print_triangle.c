#include "main.h"
#include <stdio.h>

/**
 * print_triangle - a function that prints a triangle,followed by a new line.
 * @size: An input integer
 * Return: Void
 */

void print_triangle(int size)
{
	int i, x, spaces;

	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
