#include <stdlib.h>

/**
* _strlen - Calcule la longueur d'une chaîne
* @str: La chaîne à mesurer
* Return: La longueur de la chaîne
*/
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
* str_concat - Concatène deux chaînes
* @s1: Première chaîne
* @s2: Deuxième chaîne
* Return: Pointeur vers mémoire nouvellement allouée avec chaînes concaténées
*/
char *str_concat(char *s1, char *s2)
{
	int len_s1 = (s1 != NULL) ? _strlen(s1) : 0;
	int len_s2 = (s2 != NULL) ? _strlen(s2) : 0;
	int total_length = len_s1 + len_s2 + 1;
	int i, j;
	char *concatenated;

	/** Alloue de la mémoire pour les chaînes concaténées**/
	concatenated = (char *)malloc(total_length * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/** Copie s1 dans la chaîne concaténée**/
	for (i = 0; i < len_s1; i++)
	{
		concatenated[i] = s1[i];
	}

	/** Concatène s2 à la chaîne concaténée**/
	for (j = 0; j < len_s2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	/** Ajoute le caractère null**/
	concatenated[i + j] = '\0';

	return (concatenated);
}
