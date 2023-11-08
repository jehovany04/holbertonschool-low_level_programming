#include <stdlib.h>

/**
* create_array - Crée array de caractère initialisé avec caract spécifique.
* @size: La taille du tableau.
* @c:Le caractère pour initialiser le tableau.
*
* Retour:if size = 0,show NULL.Sinon,a pointeur vers array ou NULL si échec.
*/

char *create_array(unsigned int size, char c)
{
	char *arr; /**Déclaration en dehors de la boucle**/

	if (size == 0)
{
	return (NULL); /**Retourne NULL si la taille est 0**/
}

	arr = (char *)malloc(size * sizeof(char)); /**Alloue de la mémoire**/

	if (arr == NULL)
{
	return (NULL); /**Retourne NULL si l'allocation a échoué**/
}

{
	unsigned int i; /**Déclaration à l'intérieur d'un bloc**/
	for (i = 0; i < size; i++)
{
	arr[i] = c; /**Initialise each élément d'array avec caractère spécifié**/
}
}

	return (arr); /**Retourne le pointeur vers le tableau**/
}

