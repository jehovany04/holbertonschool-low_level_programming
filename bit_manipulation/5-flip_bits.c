#include "main.h"

/**
* flip_bits -Return nombre bits à inverser for pass d'un nombre à un autre.
* @n: Le premier nombre.
* @m: Le deuxième nombre.
* Return: Le nombre de bits à inverser.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	/** Compte le nombre de bits à 1 dans le résultat du XOR **/
	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
