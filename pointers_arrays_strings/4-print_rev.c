#include <stdio.h>
#include "main.h"

/**
* print_rev - prints a string in reverse, followed by a new line
* @s: the input string to be printed in reverse
*/
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
}

	int i;
	for (i = length - 1; i >= 0; i--)

	{
	putchar(s[i]);
}

	putchar('\n');
}
