#include <stdlib.h>

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	/** Obtenir la longueur de la chaîne**/
	while (str[length] != '\0')
	{
		length++;
	}

	/** Allouer de la mémoire pour la chaîne dupliquée**/
	duplicate = (char *)malloc(sizeof(char) * (length + 1)); /** +1 for le null**/

	if (duplicate == NULL)
		return (NULL);

	/** Copier la chaîne dans la mémoire nouvellement allouée**/
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}

	/** Ajouter le caractère null à la fin**/
	duplicate[length] = '\0';

	return (duplicate);
}

