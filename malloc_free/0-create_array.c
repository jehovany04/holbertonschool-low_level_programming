#include <stdlib.h>


/**
* create_array -Crée array caractères et initialise avec caractère dedié.
* @size: La taille du tableau.
* @c: Le caractère avec lequel initialiser tableau.
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

	/* Alloue de mémoire pour tableau */
	array = malloc(sizeof(char) * size);

	/* Vérifie si l'allocation de mémoire échoue */
	if (array == NULL)
		return (NULL);

	/* Initialise tableau avec caractère donné */
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	/* Retourne pointeur vers tableau créé */

	return (array);
}
