#include "3-calc.h"

/**
* op_add - Retourne la somme de a et b.
* @a: Premier entier
* @b: Deuxième entier
*
* Retourne: Somme de a et b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Retourne la différence de a et b.
* @a: Premier entier
* @b: Deuxième entier
*
* Retourne: Différence de a et b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Retourne le produit de a et b.
* @a: Premier entier
* @b: Deuxième entier
*
* Retourne: Produit de a et b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Retourne le résultat de la division de a par b.
* @a: Premier entier
* @b: Deuxième entier
*
* Retourne: Résultat de la division de a par b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Retourne le reste de la division de a par b.
* @a: Premier entier
* @b: Deuxième entier
*
* Retourne: Reste de la division de a par b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
