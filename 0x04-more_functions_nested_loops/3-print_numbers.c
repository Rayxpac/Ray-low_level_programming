#include <unistd.h>
#include "main.h"

/**
 *  * print_numbers - Entry point
 *   * Description: print 0-9
 *    * Return: void
 */
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
