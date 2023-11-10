#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first value
 * @src: secod value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i1, i2;

	i1 = 0;
	i2 = 0;

	while (dest[i1] != '\0')
		i1++;

	for ( ; src[i2] != '\0' ; i2++)
	{
		dest[i1] = src[i2];
		i1++;
	}
	dest[i1] = '\0';
	return (dest);
}
