#include <stdio.h>
#include "main.h"

/**
* factorial - Functio to print factorial of a number
*@n: int argument
*Return: Factorial of a number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
