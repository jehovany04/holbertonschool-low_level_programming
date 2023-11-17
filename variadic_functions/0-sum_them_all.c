#include "variadic_functions.h"

/**
* sum_them_all - Retourne la somme de tous ses paramètres.
* @n: Nombre de paramètres
*
* Retourne: Somme de tous les paramètres
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /** Liste des arguments variadiques **/
	unsigned int i;
	int sum = 0;

	/** Si aucun paramètre, retourne 0 **/
	if (n == 0)
		return (0);

	/** Initialise la va_list pour accéder aux arguments variables **/
	va_start(args, n);

	/** Parcours chaque argument et l'ajoute à la somme **/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	/** Nettoie la va_list **/
	va_end(args);

	return (sum);
}
