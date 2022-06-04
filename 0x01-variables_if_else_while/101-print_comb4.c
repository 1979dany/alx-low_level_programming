#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, q;

	d = '0';

	while ( d  < '9' )
	{
		p = d + 1;
		while ( p <= 9)
		{
			q = p;
			while ( q <= '9')
			{
				if ((p != d) != q)
				{
					putchar(d);
					putchar(p);
					putchar(q);

					if (d == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
				q++;
			}

			p++;
		}
		
		d++;
	}

	putchar('\n');

	return (0);
}

