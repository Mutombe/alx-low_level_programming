#include "main.h"
#include <stdio.h>
/**
 *  _puts_recursion - return a string
 *
 *  Return: Always 0
 */
void _puts_recursion(char *s)
{
	char str = *s;

	while (str != '0')
		printf("%c", str);
	str++;
}
int main()
{
	_puts_recursion("Puts with recursion");
	return (0);
}
