#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and leaves 'q' and 'e'
 *
 *    * Return: Always 0.
 */

int main(void)
{
	char letter;

	if (!'q' && 'e')
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);

		putchar('\n');
	}

	return (0);

}
