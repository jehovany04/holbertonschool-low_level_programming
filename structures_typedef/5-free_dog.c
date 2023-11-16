#include "dog.h"                                                                                                                                
#include <stdio.h> 
#include <stdlib.h>                                                                                                                             
#include <string.h>

/**
* free_dog - Libère l'espace mémoire alloué pour une structure dog_t.
* @d: Pointeur vers la structure dog_t à libérer.
*/
void free_dog(dog_t *d)
{
	/** Vérifie si le pointeur n'est pas NULL **/
	if (d != NULL)
{
	/** Libère la mémoire allouée pour le nom du chien **/
		if (d->name != NULL)
			free(d->name);

	/** Libère la mémoire allouée pour le propriétaire du chien **/
	if (d->owner != NULL)
	free(d->owner);

	/** Libère la mémoire allouée pour la structure dog_t **/
	free(d);
	}
}
