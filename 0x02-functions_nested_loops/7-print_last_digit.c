#include <stdio.h>
#include "main.h"

/**
* print_last_digit - Prints last digit of a number
* @n: Declared integer arguments
* Return: n value of last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n % 10);
}
