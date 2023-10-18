#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Print if is positive or negative
*Return: 0 Always (succès)
*/
int main(void)

{
	char L, l;

	for (l = 'a'; l <= 'z'; l++)
	for (L = 'A'; L <= 'Z'; L++)
putchar (L), (l);
putchar ('\n');

return (0);
}
