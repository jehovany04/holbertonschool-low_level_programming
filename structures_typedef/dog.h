#ifndef DOG_H
#define DOG_H

/**
* struct dog - Représente un chien avec un nom, un âge et un propriétaire.
* @name: Pointeur vers la chaîne de caractères du nom
* @age: Âge du chien
* @owner: Pointeur vers la chaîne de caractères du propriétaire
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/** Définir new  type dog_t as a new nom pour le type struct dog **/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
