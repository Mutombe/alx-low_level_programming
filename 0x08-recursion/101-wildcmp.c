#include "main.h"
#include <stdio.h>
#include<string.h>
/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
 * @*s1 - variable
 * @*s2 - variable
 * Return - Always 0
 */

int wildcmp(char *s1, char *s2)
{
	int compare = strcmp(s1, s2);

	if (compare = 0)
		return 1;
	return 0;

}
