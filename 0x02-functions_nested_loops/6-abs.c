#include "main.h"

/**
 * _abs - computes the absolute val of integer
 *
 * @num: the integer
 *
 * Return: num
 */
int _abs(int num)
{
	int abs_val;

	if (num < 0)
	{
		abs_val = num * -1;
		return (abs_val);
	}
	return (num);
}
