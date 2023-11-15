#include "dog.h"
#include <stdio.h>

/**
* print_dog - Imprime les éléments de la structure dog
* @d: Pointeur vers la structure dog à imprimer
*
* Description : Imprime le nom, l'âge et le propriétaire d'une structure dog.
* Si un élément est NULL, imprime (nil) à la place.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
