#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended upon
 * @src: string to br appended to dest
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i1, i2;

	i1 = 0;
	i2 = 0;

	while (dest[i1])
		i1++;

	for( ; i2 < n && src[i2] != '\0'; i2++)
	{
		dest[i1] = src[i2];
		i1++;
	}
	dest[i1] = '\0';
	return (dest);
}
