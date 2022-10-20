#include "main.h"

/**
 * print_alphabet-print alphabet in lowercase and a newline.
 * Return:1 on success.
 */

void main(void)
{
	char ch;

	ch = 'a';
	 
	while ('a' <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
