#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: A pointer to a pointer to the head of the list.
* @n: The value to store in the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;  /** Nouveau nœud à ajouter **/
	dlistint_t *temp = *head;  /** Variable temporaire pour parcourir la liste **/

	new_node = malloc(sizeof(dlistint_t));/** Allouer mémoire for new nœud **/
	if (new_node == NULL)
		return (NULL);  /** Échec d'allocation mémoire **/

	new_node->n = n;/** Assigner la valeur au nouveau nœud **/
	new_node->next = NULL;  /** Le new nœud est le dernier,so son next= NULL **/

	if (*head == NULL)
	{
		new_node->prev = NULL;  /** La liste est vide, donc prev est NULL **/
		*head = new_node;/** Le nouveau nœud est maintenant la tête de la liste **/
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;  /** Parcourir la liste jusqu'au dernier nœud **/

		temp->next = new_node;  /** Mettre à jour le next du dernier nœud **/
		new_node->prev = temp;  /** Mettre à jour le prev du nouveau nœud **/
	}

	return (new_node);
}
