#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Affiche tous les éléments d'une liste dlistint_t.
* @h: Un pointeur vers le début de la liste doublement chaînée.
*
* Return: Le nombre de nœuds dans la liste.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;/** Initialiser le compteur à zéro **/

	while (h != NULL)
	{
		printf("%d\n", h->n);/** Afficher la valeur du nœud **/
		h = h->next;/** Passer au nœud suivant **/
		count++;/** Incrémenter le compteur **/
	}

	return (count);
}
