#include "main.h"

/**
 * _isalpha - check is c a letter
 *
 * @c: The character
 *
 * Return: 1 if c a letter , 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
