#include "main.h"

/**
 * _isdigit - check if c is digit or not
 *
 * @c: the character
 *
 * Return: 1 if c is digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
