#include <stdio.h>

/**
 * main - Entry point (main function)
 *
 * Return: 0
 */
int main(void)
{
	char low_case;
	char up_case;

	for (low_case = 'a' ; low_case <= 'z' ; low_case++)
		putchar(low_case);
	for (up_case = 'A' ; up_case <= 'Z' ; up_case++)
		putchar(up_case);
	putchar('\n');
	return (0);
}
