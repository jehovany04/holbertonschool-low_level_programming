#include "main.h"

/**
* set_bit - Définit la valeur d'un bit à 1 à un index donné.
* @n: Le pointeur vers le nombre.
* @index: L'index du bit à définir, en commençant par 0.
* Return: 1 si cela a fonctionné, ou -1 en cas d'erreur.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/** Vérifie si l'index est hors limites **/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/** Définit le bit à 1 en utilisant l'opérateur de décalage **/
	*n |= (1UL << index);

	return (1);
}
