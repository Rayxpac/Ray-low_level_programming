#include "main.h"

/**
 *  * _strncat - concatenates 2 strings using at most n bytes from src
 *   *
 *    * @dest: the destination string
 *     *
 *      * @src: string to be appended
 *       *
 *        * @n: number of bytes from src
 *         *
 *          * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[j++])
i++;
for (j = 0; j < n && src[j]; j++)
dest[i++] = src[j];
return (dest);
}
