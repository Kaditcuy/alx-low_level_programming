#include <stdio.h>
#include "main.h"

/**
*times_table - functio to print times table
*Return: 0 Success
*/
void times_table(void)
{
	int num1;
	int num2;
	int product;
	
	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{		product = num1 * num2;
				_putchar(product);
				_putchar(44);
				_putchar(32);
		}
		putchar('\n');
	}
return;
}
