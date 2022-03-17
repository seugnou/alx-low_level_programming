#include <stdio.h>

/**
 * main - Entry point
 *
 * Documentation: list 98 fibonacci num
 *
 * Return: Aways 0 (Success)
 *
*/

int main(void)
{
	int i;
	long int n1, n2, sum;

	n1 = 1;
	n2 = 2;

	printf("%d, %d", n1, n2);
	for (i = 2; i <= 96 ; i++)
	{
		sum = n2 + n1;
		printf("%d, ", sum);
		n2 = sum;
		n1 = n2;
	}
	printf("\b");
	return (0);
}
