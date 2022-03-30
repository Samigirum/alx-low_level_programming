#include "main.h"
/**
*factorial - factorial of given number
*@: pointer block of memory
*Return: factorial
*/
int factorial(int n)
{
if (n == 0)

return(1);

else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));

}
