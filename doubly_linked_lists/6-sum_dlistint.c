#include "lists.h"

/**
* sum_dlistint - Retourne la somme de toutes les données (n) d'une liste dlistint_t.
* @head: Pointeur vers le début de la liste doublement chaînée.
* Return: Somme de toutes les données de la liste, ou 0 si la liste est vide.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/** Parcours de la liste et accumulation de la somme **/
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
