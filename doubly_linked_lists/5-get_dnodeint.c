#include "lists.h"

/**
* get_dnodeint_at_index - Récupère node d'index donné de liste dlistint_t.
* @head: Pointeur vers le début de la liste doublement chaînée.
* @index: Index du nœud à récupérer (en commençant par 0).
* Return: Pointeur vers le nœud d'index spécifié, ou NULL s'il n'existe pas.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	/** Traverse la liste jusqu'à l'index spécifié ou la fin de la liste **/
	while (current != NULL &&  count < index)
	{
		current = current->next;
		count++;
	}

	/** Vérifie si l'index est valide et si le nœud existe **/
	if (count == index && current != NULL)
		return (current);
	else
		return (NULL);
}
