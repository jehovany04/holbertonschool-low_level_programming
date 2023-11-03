#include "main.h"

/**
* check_prime - Vérifie si le nombre est premier de manière récursive.
* @n: Le nombre à vérifier pour sa primalité.
* @i: Itérateur pour tester la divisibilité.
*
* Return: 1 si premier, 0 sinon.
*/
int check_prime(int n, int i)
{
	if (i <= 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i - 1));
}

/**
* is_prime_number - Vérifie si un nombre est premier.
* @n: Le nombre à vérifier pour sa primalité.
*
* Return: 1 si premier, 0 sinon.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, n / 2));
}
