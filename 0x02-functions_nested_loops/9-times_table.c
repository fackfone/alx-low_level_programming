#include <stdio.h>
#include <ctype.h>
void times_table(void);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	times_table();
	return (0);
}

/**
 * times_table - Prints the 9 times table starting with 0
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			putchar(result + '0');
			putchar(',');
			putchar(' ');
		}
		putchar(10);
	}
}
