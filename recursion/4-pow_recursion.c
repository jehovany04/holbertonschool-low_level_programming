#include "main.h"

/**
* power - Calcule de manière récursive x élevé à la puissance y
* @x: la base
* @y: l'exposant
*
* Return: La valeur de x élevé à la puissance y.
*/
int power(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * power(x, y - 1));
	else
		return (-1); /**Indique que y est inférieur à 0**/
}

/**
* _pow_recursion - Calcule x élevé à la puissance y
* @x: la base
* @y: l'exposant
*
* Return:valeur de x élevé à la puissance y, ou -1 si y est inférieur à 0.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /**y est inférieur à 0, retourne -1**/
	return (power(x, y));
}
