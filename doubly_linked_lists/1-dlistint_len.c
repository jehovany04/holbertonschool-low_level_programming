#include "lists.h"

/**
* dlistint_len - Retourne le nombre d'éléments dans une liste dlistint_t.
* @h: Un pointeur vers le début de la liste doublement chaînée.
*
* Return: Le nombre de nœuds dans la liste.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;  /** Initialiser le compteur à zéro **/

	while (h != NULL)
	{
		h = h->next;/** Passer au nœud suivant **/
		count++;/** Incrémenter le compteur **/
	}

	return (count);
}
