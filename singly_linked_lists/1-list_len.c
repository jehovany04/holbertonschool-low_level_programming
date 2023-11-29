#include "lists.h"

/**
* list_len - Retourne le nombre d'éléments dans une liste de type list_t.
* @h: Un pointeur vers le début de la liste.
*
* Return: Le nombre d'éléments dans la liste.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;  /** Initialiser le compteur à zéro **/

	while (h != NULL)
	{
		h = h->next;   /** Passer au prochain élément de la liste **/
		count++;       /** Incrémenter le compteur **/
	}

	return (count);
}
