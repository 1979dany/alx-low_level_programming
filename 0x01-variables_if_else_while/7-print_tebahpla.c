#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 *Main - entry point 
 *
 * 
 * Return : alwyas 0 (succcess)
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
