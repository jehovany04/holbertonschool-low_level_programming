#include <stdio.h>

/**
* int_index - Recherche un entier dans un tableau.
* @array: Le tableau d'entiers.
* @size: Le nombre d'éléments dans le tableau.
* @cmp: Un pointeur vers la fonction de comparaison.
*
* Retourne: L'index du premier élément pour lequel cmp ne renvoie pas 0.
*           Si aucun élément ne correspond, retourne -1.
*           Si size <= 0, retourne -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	/** Déclaration de l'index au début de la fonction **/
	int index;

	/** Vérification des conditions d'entrée **/
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/** Initialise l'index à -1 plus tard dans la fonction **/
	index = -1;

	/** Boucle de recherche **/
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	/** Aucun élément ne correspond **/
	return (-1);
}
