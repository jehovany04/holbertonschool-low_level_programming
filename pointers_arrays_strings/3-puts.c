#include <stdio.h>

/**
* _puts - prints a string followed by a new line
* @str: the input string to be printed
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
{
	putchar(str[i]); // imprime le caractère .
	i++;
}

	putchar('\n'); // imprime une nouvelle ligne à la fin .
}
