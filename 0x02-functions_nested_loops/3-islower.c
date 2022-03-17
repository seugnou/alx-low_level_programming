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
	int c;

	c = _islower('H');

	_putchar(c + '0');

	c = _islower('o');
	_putchar(c + '0');

	c = _islower('108');
	_putchar(c +'0');

	_putchar('\n');

	return (0);
}
