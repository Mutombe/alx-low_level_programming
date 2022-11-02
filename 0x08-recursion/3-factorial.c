#include "main.h"
#include <stdio.h>
/**
 * factorial - returns a factorial of a given number
 * @n: number to return the factorial from
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
