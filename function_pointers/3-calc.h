#ifndef CALC_H
#define CALC_H

/** Structure pour l'opérateur et la fonction associée **/
typedef struct op
{
	char *op; /** L'opérateur **/
	int (*f)(int a, int b); /** La fonction associée **/
} op_t;

/* Prototypes des fonctions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
