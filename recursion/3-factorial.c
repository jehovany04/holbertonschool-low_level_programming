#include "main.h"

/**
* factorial - Returns the factorial of a number
* @n: The number to calculate the factorial
*
* Return: Factorial of n, -1 if n is negative
*/
int factorial(int n)
{
	if (n < 0)
		return (-1); /** If n is negative, return -1 to indicate an error**/

	if (n == 0 || n == 1)
		return (1); /** Factorial of 0 and 1 is 1**/

	return (n * factorial(n - 1)); /** Return product of n+ factorial of n - 1**/
}

