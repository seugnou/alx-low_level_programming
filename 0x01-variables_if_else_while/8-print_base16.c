#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char lowc;

	for (lowc = 0; lowc <= 16; lowc++)
		putchar(lowc);
	putchar('\n');

	return (0);

}
