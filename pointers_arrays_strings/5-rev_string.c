#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* void rev_string(char *s) - reverses the string  
*@s : read the string
* Return: nothing 
*/
void rev_string(char *s)
{
char *begin = s;
char *finish = s;
char temp;

while (*finish != '\0')
finish++;
finish--;

while (begin < finish)
{
temp = *begin;
*begin = *finish;
*finish = temp;
begin++;
finish--;
}
}
