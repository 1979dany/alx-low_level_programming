#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Entry point 
 * 
 * Return: Alwyas 0 (Succcess)
 */

int main(void)
{
	char lower_case;

	lower_case = 'z';
	while (lower_case >= 'a')
	{
	putchar(lower_case);
	lower_case--;
	}
	
	putchar('\n');
	return(0);
}
