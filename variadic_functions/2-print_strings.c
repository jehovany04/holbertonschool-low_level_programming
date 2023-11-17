#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between the strings
* @n: The number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /** Liste des arguments variadiques **/
	unsigned int i;
	char *str;

	/** Initialise la va_list pour accéder aux arguments variables **/
	va_start(args, n);

	/** Parcours chaque chaîne de caractères **/
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		/** Si la chaîne est NULL, imprime (nil) **/
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/** Imprime le séparateur si ce n'est pas la dernière chaîne **/
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	/** Nettoie la va_list **/
	va_end(args);

	printf("\n");
}
