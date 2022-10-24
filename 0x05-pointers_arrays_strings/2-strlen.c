#include "main.h"
#include <string.h>

/**
 * _strlen - gets the size of a string
 *@s: Variable
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
