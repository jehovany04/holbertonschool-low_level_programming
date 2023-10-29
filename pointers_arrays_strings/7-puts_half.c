#include <stdio.h>

/**
* puts_half - Prints the second half of a string, followed by a new line
* @str: The input string
*
* Description: This function prints the second half of the given string.
* If the number of characters is odd,prints the last length - 1 / 2 characters.
*/
void puts_half(char *str)
{
int length = 0;
int i, n;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length - 1) / 2;
}

for (i = n; i < length; i++)
{
putchar(str[i]);
}

putchar('\n');
}
