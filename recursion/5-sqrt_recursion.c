#include "main.h"

/**
* sqrt_recursive - Calcule récursivement la racine carrée.
* @n: Le nombre pour lequel calculer la racine carrée.
* @i: L'itérateur pour vérifier le carré de i.
*
* Return: La racine carrée de n, -1 s'il n'y a pas de racine.
*/
int sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (sqrt_recursive(n, i + 1));
}

/**
* _sqrt_recursion - Retourne la racine carrée naturelle.
* @n: Le nombre pour lequel calculer la racine carrée.
*
* Return: La racine carrée de n, -1 si pas de racine.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /** Renvoie -1 pour les nombres négatifs.**/
	return (sqrt_recursive(n, 0));
}
