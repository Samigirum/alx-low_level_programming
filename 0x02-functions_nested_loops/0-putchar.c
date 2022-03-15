#include <unistd.h>
#include "main.h"
/**
* main - check description
* description: it print the word_putchar
* Return: 0
*/
int main(void)
{
char word [9] = "_putchar\n";
int i;

for (i =  0; i < 9; i++)
{
putchar(word[i]);
}

return (write(0, i, 8);

}

