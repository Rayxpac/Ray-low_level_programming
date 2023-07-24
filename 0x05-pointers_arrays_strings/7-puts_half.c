#include "main.h"
#include <string.h>

/**
 *  * puts_half - prints second half of a string
 *   *
 *    * @str: the string
 *     *
 *      * Return: void
 */

void puts_half(char *str)
{
long int i, n, len = 0;
while (str[len] != '\0')
len++;
if (len % 2 == 0)
n = len / 2;
else
n = (len - 1) / 2;
for (i = n; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
