#include "3-calc.h"

/**
* get_op_func - Sélectionne la fonction correcte pour effectuer l'opération
* demandée par l'utilisateur.
* @s: L'opérateur passé en argument au programme
*
* Retourne: Un pointeur vers la fonction correspondant à l'opérateur donné
*           en paramètre.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
