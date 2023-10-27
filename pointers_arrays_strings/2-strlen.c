#include "main.h"
#include <stdio.h>

/**
* _strlen - returns the length of a string
* @s: the input string
*
* Return: The length of the string (number of characters).
*/
int _strlen(char *s)
{
int l = 0;

	while ( s[l] != '\0')
	{
		l++;
	}
	return l;
}
