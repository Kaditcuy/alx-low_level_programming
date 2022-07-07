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
	int output;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			output = num1 * num2;

			if (num2 == 0)
				_putchar('0' + output);
			else if (output >= 10)
			{
				_putchar(' ');
				_putchar('0' + (output / 10));
				_putchar('0' + (output % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + output);
			}
			if (num2 != 9)
				_putchar(',');
			}
		_putchar('\n');
	}
}
