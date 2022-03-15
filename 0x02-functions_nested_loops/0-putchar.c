#include <unistd.h>
#include "main.h"
int _putchar(char _putchar)
{
	return (write(1, _putchar, 8));

