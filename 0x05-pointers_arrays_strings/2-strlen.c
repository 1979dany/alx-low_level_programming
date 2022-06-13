#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int strlength = 0;

	while (s[strlength] != '\0')
		strlength++;
	return (strlength);
}

