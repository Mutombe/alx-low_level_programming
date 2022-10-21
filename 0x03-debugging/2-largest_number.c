#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main(int a, int b,int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b < a && a < c)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	

	return (largest);
	
}
