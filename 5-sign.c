#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	else if (n < 0)
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
