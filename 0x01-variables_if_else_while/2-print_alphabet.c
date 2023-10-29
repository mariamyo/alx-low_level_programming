#include <stdio.h>

/**
 * main - Entry point (main function)
 *
 * Return: 0
 */
int main(void)
{
	int low_case;

	for (low_case = 'a' ; low_case <= 'z' ; low_case++)
		putchar(low_case);
	putchar('\n');
	return (0);
}
