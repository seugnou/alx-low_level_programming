#include "main.h"

/**
 * main - check description
 * Description: it prints the word _putchar, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char text[9] = "_putchar";
	int anyNumber = 0;

	for (anyNumber = 0; anyNumber < 8; ++anyNumber)
	{

		_putchar(text[anyNumber]);
	}

	_putchar('\n');

	return (0);
}
