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

	for (num = 0, lowc = 'a'; num <= 9 && lowc <= 'f'; num++, lowc++)
		putchar(num);

		putchar(lowc);	

	putchar('\n');

	return (0);

}
