#include <stdio.h>
/** 
 * entry point
 * always a (success)
 */
int main(void)
{
int ch;
for (ch='a'; ch <= 'z'; ch++)
putchar(ch);
for (ch='A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
