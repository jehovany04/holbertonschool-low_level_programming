#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 *  * struct op - Structure for the operator and associated function
 *   * @op: The operator
 *    * @f: The associated function
 *     */
typedef struct op
{
	    char *op;
	        int (*f)(int a, int b);
} op_t;

/* Prototypes of functions */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
