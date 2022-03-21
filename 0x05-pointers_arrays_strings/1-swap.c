#include"main.h"
/**
* swap_int - to swap tow integer
*@a: print int
*@b: print int
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int iTemp;
iTemp = *a;
*a = *b;
*b = iTemp;
