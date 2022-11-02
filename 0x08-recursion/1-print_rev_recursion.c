#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	char *rev[50];
	int i, j, count = 0;

	while (*s != '\0')
	{
		count++;
	}
	j = count - 1;

	//reversing the string by swaping
	for (i = 0; i < count; i++)
	{
		rev[i] = &s[j];
		j--;
	}
}


