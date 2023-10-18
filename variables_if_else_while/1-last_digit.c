#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print if is positive or negative
* Return: 0 Always (succès)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10

	if (n > 5)
		printf("%d is greater than 5\n", n);
	if (n < 6 and not 0)
		printf("%d is less than 6 and not 0\n", n);
	if (n == 0)
		printf("%d is 0\n", n);

	return (0);
}
