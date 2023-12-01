#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
* struct dlistint_s - Structure pour un nœud d'une liste doublement chaînée
* @n: Entier stocké dans le nœud
* @prev: Pointeur vers l'élément précédent de la liste
* @next: Pointeur vers l'élément suivant de la liste
*/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/** Prototypes de fonctions **/
size_t print_dlistint(const dlistint_t *h);

#endif /** LISTS_H **/

