#include <stdio.h>
#include <ctype.h>
void jack_bauer(void);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	jack_bauer();
	return (0);
}

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{

		for (j = 0; j <= 59; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(':');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(10);
		}
	}
}
