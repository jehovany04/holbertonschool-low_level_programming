#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - Imprime chaîne et new ligne en utilisant la récursivité
* @s: La chaîne d'entrée à imprimer
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	putchar('\n'); /**caractère de fin de chaîne=imprimer nouvelle ligne**/
	return;

	putchar(*s); /** Imprimer le caractère actuel**/
	_puts_recursion(s + 1); /** Passer au caractère suivant dans la chaîne**/
}
