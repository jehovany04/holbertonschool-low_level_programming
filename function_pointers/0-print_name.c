#include <stdio.h>

/**
* print_name - Imprime un nom en utilisant une fonction donnée.
* @name: Le nom de la personne.
* @f: Pointeur vers la fonction qui va imprimer le nom.
*
* Retour: Rien.
*/
void print_name(char *name, void (*f)(char *))
{
	/** Vérifie si les paramètres ne sont pas nuls **/
	if (name != NULL && f != NULL)
	{
		/** Appelle la fonction pointée par f avec le nom fourni **/
		f(name);
	}
}
