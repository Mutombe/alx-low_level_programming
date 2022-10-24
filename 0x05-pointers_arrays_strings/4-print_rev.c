#include "main.h"
#include <stdio.h>

/**
 * print_prev - prints a string in reverse followed by a newline
 * @s: input string
 * Return - no return
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
