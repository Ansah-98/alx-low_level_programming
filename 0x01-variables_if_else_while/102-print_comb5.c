#include<stdio.h>

/**
*main-entrypointoftheprogram
*
*
*
*Return:Alwaysreturn0(success)
*
*/
int main(void)
{
	int number1;
	int number2;

	for (number1 = 0; number1 < 100; number1++)
	{
		int tens1 = number1 / 10;
		int ones1 = number1 % 10;

		for (number2 = number1; number2 < 100; number2++)
		{
			int tens2 = number2 / 10;
			int ones2 = number2 % 10;

			putchar(tens1 + '0');
			putchar(ones1 + '0');
			putchar(' ');
			putchar(tens2 + '0');
			putchar(ones2 + '0');

			if (number1 != 99 || number2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
