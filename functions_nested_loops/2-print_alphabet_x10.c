#include "main.h"

/**
* print_alphabet_x10 - Prints alphabet in lowercase 10x,followed by a new line.
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		i++;
	}
}

