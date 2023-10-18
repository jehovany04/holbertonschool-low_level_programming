#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print if is positive or negative
* Return: 0 Always (succès)
*/

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (n > 5)
		printf("%d%d Last digit of 98 is 8 and is greater than 5", n, d);
	if (n < 6)
		printf("%d%d is less than 6 and not 0", n, d);
	if (n == 0)
		printf("%d%d is 0", n, d);

	return (0);
}
