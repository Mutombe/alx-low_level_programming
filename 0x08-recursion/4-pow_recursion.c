#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x - variable
 * @y - variable
 * Return:Always 0
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
