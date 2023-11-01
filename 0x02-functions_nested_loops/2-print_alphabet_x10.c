#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10times
 *
 * Return: -
*/
void print_alphabet_x10(void)
{
	int alpha_x10;
	int loop;

	loop = 0;

	while (loop < 10)
	{
		loop++;
		for (alpha_x10 = 'a' ; alpha_x10 <= 'z' ; alpha_x10++)
			_putchar(alpha_x10);
		_putchar('\n');
	}
}
