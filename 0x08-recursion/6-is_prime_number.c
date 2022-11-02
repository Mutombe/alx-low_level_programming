#include "main.h"
/**
 * is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int  i;
	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			return(0);
		}
		else
			return(1);
	}
}
