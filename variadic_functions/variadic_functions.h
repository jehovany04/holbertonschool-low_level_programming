#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
* struct op - Structure pour l'opérateur et la fonction associée
* @op: L'opérateur
* @f: La fonction associée
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/** Prototypes des fonctions **/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif /** VARIADIC_FUNCTIONS_H **/
