#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main(void)
{
	int a, b, c;

	int largest;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
	largest = c;
	}
	printf("Largest number is %d", largest);

	return (largest);
	
}
