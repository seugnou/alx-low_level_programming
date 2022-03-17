#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Aways 0 (Success)
 *
*/

int main(void)
{
	int i;
	long int fibonacci[98], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 98; ++i)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 100000000)
		
				sum += fibonacci[i];
	
	}
	 printf("%ld\n", fibonacci[i]);

	 return (0);
}
