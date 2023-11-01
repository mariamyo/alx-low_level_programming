#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: -
*/
void times_table(void)
{
	int num1, num2, num3, num4, result;

	for (num1 = 0 ; num1 <= 9 ; num1++)
	{
		for (num2 = 0 ; num2 <= 9 ; num2++)
		{
			result = num1 * num2;
			if (result > 9)
			{
				num3 = result % 10;
				num4 = (result - num3) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(num3 + '0');
				_putchar(num4 + '0');
			}
			else
			{
				if (num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
