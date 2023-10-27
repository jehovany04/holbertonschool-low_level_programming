#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string followed by a new line
* @str: the input string to be printed
*/
void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)

{
putchar(str[i]);
}

putchar('\n');

}
