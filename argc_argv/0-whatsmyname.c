#include <stdio.h>

/**
* main - Imprime le nom du programme, suivi d'une nouvelle ligne.
* @argc: Le nombre d'arguments de la ligne de commande.
* @argv: Un tableau de pointeurs vers les arguments de la ligne de commande.
*
* Return: 0 en cas de succès.
*/
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{

	printf("%s\n", argv[0]);

	return (0);
	}
	else
	{
	return (1);
	}
}
