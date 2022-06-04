#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char low;

	d = '0';
	low = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	while (low <= 'f')
	{
		putchar(low);
		low++;
	}

	putchar('\n');
	return (0);
}
