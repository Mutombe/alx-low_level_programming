#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a newline
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
