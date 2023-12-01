#include "main.h"

/**
* get_bit - Renvoie la valeur du bit à un index donné.
* @n: Le nombre.
* @index: L'index du bit à obtenir, en commençant par 0.
* Return: La valeur du bit à l'index ou -1 en cas d'erreur.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	/** Vérifie si l'index est hors limites **/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/** Décale le bit à la position la plus à droite **/
	n >>= index;

	/** Renvoie la valeur du bit le plus à droite (0 ou 1) **/
	return (n & 1);
}
