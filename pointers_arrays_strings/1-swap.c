#include "main.h"

/**
*swap_int(int *a, int *b) - swaps the values of two integers.
*@a :the first pointer
*@b : the second pointer
*/


void swap_int(int *a, int *b)

int temp = *a;
*a = *b;
*b = temp;
