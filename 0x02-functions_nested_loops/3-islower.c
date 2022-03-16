#include "main.h"

/**
* _islower - Short description, single lines
*@c: it contain value
* description: it checkes the lowercase character
* Retrun: Always 0
*/
int _islower(int c)

{

if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}

}
