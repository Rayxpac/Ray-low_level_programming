#include "main.h"

/**
 *  * print_square - entry point
 *   * @size: size of the square
 *    * Description: print a square
 *     * Return: 0
 */

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
