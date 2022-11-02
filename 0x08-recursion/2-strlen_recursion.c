#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count);

	return count;
}
