#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array-creates an array and initialises it with a specific char
 * @size: Variable
 * @c: Variable
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	A = malloc(sizeof(char) * size);
	if (A == NULL)
		return (NULL);
	while (i < size)
	{
		A[i] = c;
		i++;
	}
	return (A);
}
