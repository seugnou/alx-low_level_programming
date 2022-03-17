#include "main.h"

/**
 * print_alphabet_x10 - check code
 * Description: this code prints the alphabets in lowercase 10 times
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char lowcLine1;
	int lowcInc;

	for (lowcInc = 0; lowcInc < 10; ++lowcInc)
	{
		for (lowcLine1 = 'a'; lowcLine1 <= 'z'; ++lowcLine1)
			_putchar(lowc);
		_putchar('\n');

	}
}
