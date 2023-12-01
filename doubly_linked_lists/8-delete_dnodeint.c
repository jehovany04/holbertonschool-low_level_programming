#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the address of the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i = 0;

	/** Check if the list is empty or index is out of bounds **/
	if (*head == NULL || index >= dlistint_len(*head))
		return (-1);

	/** Delete the node at the beginning if index is 0 **/
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/** Traverse the list to find the deletion point **/
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/** Delete the node if the index is valid **/
	if (i == index && current != NULL)
	{
		temp = current->prev;
		temp->next = current->next;
		if (current->next != NULL)
			current->next->prev = temp;
		free(current);
		return (1);
	}

	return (-1);
}

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)

	{
		count++;
		h = h->next;
	}
	return (count);
}
