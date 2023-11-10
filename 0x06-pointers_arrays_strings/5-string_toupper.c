#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @ptr: pointer
 * Return: ptr
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i])
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] -= 32;
		i++;
	}
	return (ptr);
}
