#include "main.h"

/**
 * main - check the code
 * Description: this code prints alphabet in lowercase followed by a new line
 * Return: Always 0.
*/

void print_alphabet(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; ++lowc)
		_putchar(lowc);
	_putchar('\n');
}
