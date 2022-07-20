#include "main.h"
#include <stdio.h>

/**
*  _pow_recursion - Function to print power of two integers
*@x: Int argument
*@y: int argument
*Return: Power of x^y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0 || x == 1)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
