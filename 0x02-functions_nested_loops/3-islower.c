#include "main.h"

/**
 * _islower - check code
 * Description: checks lowercase character
 * 
 * Return: 1 if c is lowercase
 *
 * Retrun: 0 otherwise
*/

int _islower(int c)
{
	int r;

	r = _islower('H');

	_putchar(r + '0');

	r = _islower('o');
	_putchar(r + '0');

	r = _islower('108');
	_putchar(r +'0');

	_putchar('\n');

	return (0);
}
