#include "main.h"

/**
* _strlen_recursion - Calcule longueur de chaîne de caractères de manière récursive
* @s: La chaîne d'entrée pour laquelle calculer la longueur
* 
* Retour: La longueur de la chaîne
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0') {
		return 0; /**si caractère actuel est le caractère de fin de chaîne, retourne 0**/
	}
	return 1 + _strlen_recursion(s + 1); /**Ajoute 1 et appelle de manière récursive avec le caractère suivant**/
}
