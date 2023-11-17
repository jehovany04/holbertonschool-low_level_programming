#include <stdio.h>

/**
* array_iterator - Exécute une fonction sur chaque élément d'un tableau.
* @array: Le tableau d'entiers.
* @size: La taille du tableau.
* @action: Un pointeur de fonction pour l'action à effectuer.
*
* Retour: Rien.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t i = 0;  /** Déclarer i en dehors de la boucle**/

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
