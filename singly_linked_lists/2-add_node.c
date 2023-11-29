#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste de type list_t.
 * @head: Un pointeur vers un pointeur vers le début de la liste.
 * @str: La chaîne à dupliquer et à ajouter au nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);  /** Vérifier les paramètres d'entrée **/

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL);  /** Échec d'allocation mémoire **/

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);  /** Échec de duplication de chaîne **/
	}

	new_node->len = strlen(str);
	new_node->next = *head;  /** Mettre à jour le pointeur next **/

	*head = new_node;  /** Mettre à jour le pointeur head **/

	return (new_node);
}
