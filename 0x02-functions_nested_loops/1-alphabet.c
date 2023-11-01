#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * 
 * Return: -
*/
void print_alphabet(void)
{
    char low_alpha;

    for (low_alpha = 'a' ; low_alpha <= 'z' ; low_alpha++)
    {
        _putchar(low_alpha);
    }
    _putchar('\n');
}