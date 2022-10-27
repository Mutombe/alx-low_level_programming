#include "main.h"
/**
 *  _strncat - concatenates two strings,
 *  @dest: destination.
 *  @src: source.
 *  @n: amount of bytes used from src.
 *  Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != ' ')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != ' ')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = ' ';

	return (dest);
}
