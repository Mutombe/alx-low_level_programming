#include "main.h"
#include <string.h>
/**
 *  is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *  Return: Always 0.
 */
int is_palindrome(char *s)
{
	int lo = 0;
	int hi = strlen(s) - 1;
	while (lo < hi)
		if(s[lo++] != s[hi--])
			return 0;
	return 1;	
}
