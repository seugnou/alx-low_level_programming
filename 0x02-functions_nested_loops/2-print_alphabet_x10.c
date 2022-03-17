#include "main.h"

/**
 * print_alphabet_x10 - check code
 * Description: this code prints the alphabets in lowercase 10 times
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char lowc;
	int lowcInc;

	for (lowcInc = 0; lowcInc < 10; ++lowcInc)
	{
		for (lowc = 'a'; lowc <= 'z'; ++lowc)

			_putchar(lowc);
		_putchar('\n');

	}
}
