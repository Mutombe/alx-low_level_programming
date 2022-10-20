#include "main.h"

/**
 *_isLower - checks for lowercase character
 *@c: the character to check
 *Return: 1 if c lowercase, 0 otherwise
 */

int _isLower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
