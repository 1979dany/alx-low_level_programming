#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char lower_alphabet, e, q;
	
	lower_alphabet = 'a';
	e = 'e';
	q = 'q';
	while (lower_alphabet <= 'z')
	{
		if (lower_alphabet != e && lower_alphabet != q)
			putchar(lower_alphabet);
		lower_alphabet++;
	}
	putchar('\n');
	return (0);
}

