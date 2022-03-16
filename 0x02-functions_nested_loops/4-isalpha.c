#include "main.h"

/**
<<<<<<< HEAD
*
* _isalpha - Return 1 if c is letter. lowecase or uppercase
* @c: the int to print
* Return: Always 0.
*/

=======
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *
 *@c: The int to print
 * Return: Always 0.
 */
<<<<<<< HEAD
>>>>>>> 2ba1e7ee745f57e8d69ea52b77d20f0ee95906d1
=======

>>>>>>> 3097a9f4698d17dc31a47ae52fc4c260a84d053a
int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || ( c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}

}
