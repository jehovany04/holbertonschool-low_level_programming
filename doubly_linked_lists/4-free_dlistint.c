#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - Libère une liste de type dlistint_t.
* @head: Pointeur vers le début de la liste doublement chaînée.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/** Parcours de la liste pour libérer chaque élément **/
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
