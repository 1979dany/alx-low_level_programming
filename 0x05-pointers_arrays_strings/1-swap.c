#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: an inout integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
