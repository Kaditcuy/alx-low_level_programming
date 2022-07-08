#include <stdio.h>
#include "main.h"

/**
* print_last_digit - Prints last digit of a number
* @n: Declared integer arguments
* Return: n value of last digit
*/
int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
	}
	else
	{
		x = (n % 10) * -1;
	}
	_putchar('0' + x);
	return (x);
}
