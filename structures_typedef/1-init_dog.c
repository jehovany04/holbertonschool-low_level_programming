#include "dog.h"
#include <stddef.h>

/**
* init_dog - Initialise une structure dog
* @d: Pointeur vers la structure dog à initialiser
* @name: Pointeur vers la chaîne de caractères du nom
* @age: Âge du chien
* @owner: Pointeur vers la chaîne de caractères du propriétaire
*
* Description : Initialise membres de structure dog avec valeurs fournies.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
