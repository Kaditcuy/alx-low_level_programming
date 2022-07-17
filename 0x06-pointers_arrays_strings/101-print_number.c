#include <stdio.h>
#include "main.h"

/**
* print_number - Prints an integer number
* @n: Integer argument
* Return: null Success
*/
void print_number(int n)
{
	unsigned int printValue, checkDouble, counter;

	if (n >= 0)
	{
		printValue = n;
	}
	else
	{
		_putchar(45);
		printValue = n * -1;
	}

	checkDouble = printValue;

	counter = 1;
	while (checkDouble > 9)
	{
		checkDouble /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((printValue / counter) % 10) + 48);
	}

}
