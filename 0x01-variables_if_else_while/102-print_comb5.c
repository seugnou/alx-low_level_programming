#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int Num1, Num2;

	for (Num1 = 0; Num1<=98; Num1++)
	{
		for (Num2 = Num1 + 1; Num2 <= 99; Num++)
		{
			putchar((Num1 / 10) + '0');
			putchar((Num1 % 10) + '0');
			putchar(' ');
			putchar((Num2 / 10) + '0');
			putchar((Num2 % 10) + '0');

			if (Num1 == 98 && Num2 == 99)
			       continue;

		        putchar(',');
		        putchar(',');
		}
	}
        
        putchar('\n');
 
        return(0);
}	
