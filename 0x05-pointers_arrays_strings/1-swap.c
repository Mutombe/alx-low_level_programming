#include "main.h"
/**
 * swap_int - function to swap the values of int a and int b
 * @a: first variable
 * @b: second variable
 * Return: b and a
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = *a;

}
