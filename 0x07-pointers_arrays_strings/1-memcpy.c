#include "main.h"
/**
*_memcpy - copy number bytes from adress to to
*@dest: copy content
*@src: source of data
*n: byte of the memory
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

i = 0;
while (i < n)
{
*(dest +i) = *(src + i);
i++;

}

return (dest);
}
