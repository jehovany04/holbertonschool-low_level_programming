#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - Imprime les éléments spécifiés par le format.
* @format: Chaîne de format pour spécifier les types d'arguments
* Les types possibles dans le format : 'c', 'i', 'f', 's'
*/
void print_all(const char * const format, ...)
{
	va_list args; /** Liste des arguments variadiques **/
	const char *ptr = format;

	/** Initialise la va_list pour accéder aux arguments variables **/
	va_start(args, format);

	while (ptr != NULL && *ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				break;
		}

		ptr++;

/** Si le caractère suivant n'est pas la fin de la chaîne et que
* le caractère suivant est l'un des types attendus ('c', 'i', 'f', 's'),
* imprime la virgule et l'espace
**/

if (*ptr != '\0' && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");
	}

	printf("\n");

	/** Nettoie la va_list **/
	va_end(args);
}
