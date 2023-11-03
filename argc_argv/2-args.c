#include <stdio.h>

/**
* main - Imprime tous les arguments reçus, un par ligne.
* @argc: Nombre d'arguments de la ligne de commande.
* @argv: Tableau de pointeurs vers les arguments de la ligne de commande.
*
* Return: Toujours 0.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

