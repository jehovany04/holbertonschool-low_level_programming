#include <stdio.h>
#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: La chaîne d'entrée à imprimer à l'envers
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return; /**si caractère actuel=caractère de fin chaîne,go out**/

	_print_rev_recursion(s + 1); /**call récursivement fonc with next charater**/

	putchar(*s); /**Imp caractère après tous les caractères suivants **/
}
