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

	for (lowc = 'a'; lowc <= 'f'; lowc++)
	{
		for (num = 0; num <= 10; num++)
		{
			putchar(num);
		}
		putchar(lowc);
	putchar('\n');

	return (0);

}
