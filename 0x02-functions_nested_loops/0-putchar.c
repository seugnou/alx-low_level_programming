#include "main.h"

/**
 * main - check description
 * Description: it prints the word _putchar, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char text[] = "_putchar";
	int anyNumber;

	for (anyNumber = 0; anyNumber < 9; ++anyNumber)
	{
		text[10] = anyNumber;

		_putchar(text);
	}

	_putchar('\n');

	return (0);
}
