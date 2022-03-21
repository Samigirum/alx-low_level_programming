#include "main.h"
/**
*_puts - print a strings
*@str: print an char
*
* Return: Always 0.
*/

void _puts(char *str)
{
char a;
int m;
a = str;
m = 0;

while (a[m] != '\0')
{
m++;
}
_putchar('\n');

return (m);
}
