#include <stdio.h>

/**
 * main - Entry point (main function)
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0 ; digit <= 9 ; digit++)
	{
		if (digit == 9)
			putchar(digit + '0');
		else
		{
			putchar(digit + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
