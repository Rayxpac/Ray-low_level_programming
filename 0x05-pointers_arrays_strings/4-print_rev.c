#include "main.h"

/**
 *  * print_rev - prints a string in reverse
 *   *
 *    * @s: the string
 *     *
 *      * Return: void
 */

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
while (i)
{
_putchar(s[--i]);
}
_putchar('\n');
}
