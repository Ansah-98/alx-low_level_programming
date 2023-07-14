#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point of the program
 *
 *
 *
 *Return: Always return 0(success)
 *
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n % 10;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, y);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0", n, 0);
	}
	else if ((n % 10 < 6) && (n % 10 != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, y);
	}
	return (0);
}
