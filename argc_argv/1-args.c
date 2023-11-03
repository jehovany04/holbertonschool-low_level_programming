#include <stdio.h>

/**
* main - Imprime le nombre d'arguments passés dans le programme.
* @argc: Nombre d'arguments de la ligne de commande.
* @argv: Tableau de pointeurs vers les arguments de la ligne de commande.
*
* Return: Toujours 0.
*/
int main(int argc, char *argv[])
{
	(void)argv;  /** Évite l'avertissement unused parameter **/

	printf("%d\n", argc - 1);
	return (0);
}

