#include <stdlib.h>


/**
* create_array -Crée array caractères et initialise avec caractère dedié.
* @size: La taille du tableau.
* @c: Le caractère avec lequel initialiser le tableau.
*
* Retourne: NULL si size = 0,si allocation memory fail,sinon pointeur to array.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Vérifie si size est égal à 0 */
	if (size == 0)
		return (NULL);

	/* Alloue de la mémoire pour le tableau */
	array = malloc(sizeof(char) * size);

	/* Vérifie si l'allocation de mémoire échoue */
	if (array == NULL)
		return (NULL);

	/* Initialise le tableau avec le caractère spécifié */
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	/* Retourne un pointeur vers le tableau créé */

	return (array);
}
