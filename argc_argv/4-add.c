#include <stdio.h>
#include <stdlib.h>

/**
* is_positive_number - Vérifie si une chaîne contient juste des chiffres.
* @str: La chaîne à vérifier.
*
* Return: 1 si la chaîne est un nombre positif, 0 sinon.
*/
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
* main - Ajoute des nombres positifs passés en arguments.
* @argc: Nombre d'arguments.
* @argv: Tableau d'arguments.
*
* Return: 0 en cas de succès, 1 en cas d'erreur.
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

