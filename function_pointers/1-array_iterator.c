#include <stddef.h>

/**
* array_iterator - Applique une fonction donnée à chaque élément d'un tableau.
* @array: Le tableau à parcourir.
* @size: La taille du tableau.
* @action: Un pointeur vers la fonction à appliquer à chaque élément.
*
* Retour: Rien.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/** Vérifie si les paramètres ne sont pas nuls **/
	if (array == NULL || action == NULL)
		return;

	/** Initialise un index **/
	size_t i = 0;

	/** Applique la fonction action à chaque élément du tableau avec une boucle while **/
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
