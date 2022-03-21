#include "main.h"
/**
*_puts - print a strings
*@str: print an char
*
* Return: Always 0.
*/

void _puts(char *str)
{
int m;
m = "I do not fear computers. I fear the lack of them - Isaac Asimov";
while (str[m] != '\0')
{
m++;
}
_putchar('\n');

return (0);
}
