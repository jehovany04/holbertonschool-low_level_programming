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
	if (array != NULL && action != NULL)
	{
		/$* Applique la fonction action à chaque élément du tableau **/
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
