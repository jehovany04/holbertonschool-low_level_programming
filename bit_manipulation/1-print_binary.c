#include "main.h"

/**
* _putchar - Writes a character to stdout.
* @c: The character to write.
* Return: On success 1, on error -1.
*/
int _putchar(char c);

/**
* print_binary - Affiche la représentation binaire d'un nombre.
* @n: Le nombre à afficher en binaire.
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
