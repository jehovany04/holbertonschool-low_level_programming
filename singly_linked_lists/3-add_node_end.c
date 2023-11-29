#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Ajoute un nouveau nœud à la fin d'une liste de type list_t.
* @head: Un pointeur vers un pointeur vers le début de la liste.
* @str: La chaîne à dupliquer et à ajouter au nouveau nœud.
*
* Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));


	if (head == NULL || str == NULL)

		return (NULL);  /** Vérifier les paramètres d'entrée **/

	if (new_node == NULL)

		return (NULL);  /** Échec d'allocation mémoire **/

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);  /** Échec de duplication de chaîne **/
	}

	new_node->len = strlen(str);
	new_node->next = NULL;  /** nouveau nœud est dernier, donc next = NULL **/

	if (*head == NULL)
	{
		*head = new_node;  /** Si liste vide, nouveau nœud devient la tête **/
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)

			current = current->next;  /** Trouver le dernier nœud dans la liste **/

		current->next = new_node;  /** Ajouter le nouveau nœud à la fin **/
	}

	return (new_node);
}
