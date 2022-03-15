#include <unistd.h>
#include "main.h"
/**
* main - check description
* description: it print the word_putchar
* Return: 0
*/
int main(void)
{
char word[9] = "_putchar\n";
  int c;
  for ( c = 0; c < 9; c++)
{
    _putchar(word[c]);
}

return (0);

}


