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
	unsigned long fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i <= 97 ; ++i)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		if (i == 97)
			printf("%ld\n", fibonacci[i]);
		else
			printf("%ld, ", fibonacci[i]);
	}

	return (0);
}
