#include "lists.h"
#include <stdio.h>

/**
* print_list - Affiche tous les éléments d'une liste de type list_t.
* @h: Un pointeur vers le début de la liste.
*
* Return: Le nombre de nœuds dans la liste.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/** Affiche la longueur et la chaîne ou "(nil)" si la chaîne est nulle **/
		printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}
