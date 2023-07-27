#include "main.h"

/**
 *  * *cap_string - converts to sentence case
 *   * @str: pointer to string
 *    * Return: Sentence case
 */

char *cap_string(char *str)
{
int i = 0;
for ( ; str[i] != '\0'; i++)
{
if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
str[i] -= 32;
if (separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
str[i + 1] -= 32;
}
return (str);
}
