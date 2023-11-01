#include "main.h"

/**
 * _islower - check is c is lower or not
 *
 * @c: The character
 *
 * Return: 1 if c is lower , 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
