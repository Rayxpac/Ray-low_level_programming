#include "main.h"

/**
 * entry point
 * return: always 0
 */
void more_numbers(void)
{
int n;
int i = 0;
while (i < 10)
{
for (n = 0; n < 15; n++)
{
if (n > 9)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
_putchar('\n');
i++;
}
}
