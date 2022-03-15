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
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (lowc = 'a'; lowc <= 'f'; lowc++)
		putchar(lowc);

	putchar('\n');

	return (0);

}
