#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0(Success)
 */
int main(void)
{
	int n, modulo10 = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulo10 = n % 10;
	if (modulo10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, modulo10);
	}
	else if (modulo10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, modulo10);
	}
	else if (modulo10 < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo10);
	}
	return (0);
}
