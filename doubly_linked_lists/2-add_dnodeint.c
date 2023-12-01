#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t.
* @head: Un pointeur vers un pointeur vers le début de la liste.
* @n: La valeur à stocker dans le nouveau nœud.
*
* Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;/** Nouveau nœud à ajouter */

	new_node = malloc(sizeof(dlistint_t));/** Allouer mémoire for new  nœud **/
	if (new_node == NULL)
		return (NULL);  /** Échec d'allocation mémoire **/

	new_node->n = n;/** Assigner la valeur au nouveau nœud **/
	new_node->prev = NULL;/**nouveau nœud est le premier,so son prev= NULL **/
	new_node->next = *head;  /** Mettre à jour le next du nouveau nœud **/

	if (*head != NULL)
		(*head)->prev = new_node;  /** Mettre à jour le prev de l'ancienne tête **/

	*head = new_node;  /** Mettre à jour le pointeur de tête **/

	return (new_node);
}
