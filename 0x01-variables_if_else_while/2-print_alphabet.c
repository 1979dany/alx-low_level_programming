#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	char lower_alphabet;

	lower_alphabet = 'a';
	 
	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);	
		lower_alphabet++;
	}
	putchar('\n');
	return (0);
}

