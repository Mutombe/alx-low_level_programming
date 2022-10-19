#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints sign of a number
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	if (n < 0)
	{
		return (-1);
		printf("-");
	}
	else 
	{
		return (0);
		printf("0");
	}
}
