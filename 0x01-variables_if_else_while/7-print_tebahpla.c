#include <stdio.h>

/**
 * main - Entry point (main function)
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
