#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - Imprime des nombres, suivis d'une nouvelle ligne.
* @separator: La chaîne à imprimer entre les nombres
* @n: Le nombre d'entiers passés à la fonction
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /** Liste des arguments variadiques **/
	unsigned int i;

	/** Initialise la va_list pour accéder aux arguments variables **/
	va_start(args, n);

	/** Imprime chaque nombre avec le séparateur **/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		/** Imprime le séparateur si ce n'est pas le dernier nombre **/
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	/** Nettoie la va_list **/
	va_end(args);

	printf("\n");
}
