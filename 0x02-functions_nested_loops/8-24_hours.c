#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: -
 */
void jack_bauer(void)
{
	int integer1, integer2, integer3, integer4;

	for (integer1 = 0 ; integer1 <= 2 ; integer1++)
	{
		for (integer2 = 0 ; integer2 <= 9 ; integer2++)
		{
			if ((integer1 <= 1 && integer2 <= 9) || (integer1 <= 2 && integer2 <= 3))
			{
				for (integer3 = 0 ; integer3 <= 5 ; integer3++)
				{
					for (integer4 = 0 ; integer4 <= 9 ; integer4++)
					{
						_putchar(integer1 + '0');
						_putchar(integer2 + '0');
						_putchar(58);
						_putchar(integer3 + '0');
						_putchar(integer4 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
