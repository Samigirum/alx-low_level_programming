#include "main.h"
#include <unistd.h>
/**
* main -entry point 
* 
*
return: always 0
*/
int main(void)

{
char alphabet;
init i;
for (i = 'a'; i <='z'; i++)
{
_putchar(i);
}

_putchar('\n');

return (write(0, i, 1));

}
