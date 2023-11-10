#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i1 , i2;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i1 = 0 ; str[i1] != '\0' ; i1++)
	{
		for (i2 = 0 ; i2 < 10 ; i2++)
		{
			if (str[i1] == s1[i2])
			{
				str[i1] = s2[i2];
			}
		}
	}
	return (str);
}
