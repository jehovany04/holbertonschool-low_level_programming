#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* new_dog - Crée un nouveau chien avec une copie du nom et du propriétaire.
* @name: Pointeur vers la chaîne de caractères du nom
* @age: Âge du chien
* @owner: Pointeur vers la chaîne de caractères du propriétaire
*
* Return: Pointeur vers le nouveau chien, NULL si la fonction échoue
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	/** Déclare la structure dog_t avant de l'allouer dynamiquement **/

	dog_t *new_dog;

	/** Alloue de la mémoire pour la nouvelle structure dog_t **/
	new_dog = malloc(sizeof(dog_t));

	/** Vérifie si les pointeurs name et owner ne sont pas NULL **/
	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	/** Alloue de la mémoire et copie la chaîne de caractères du nom **/
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/** Alloue mémoire et copie chaîne de caractères du propriétaire **/
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/** Définit l'âge du nouveau chien **/
	new_dog->age = age;

	return (new_dog);
}
