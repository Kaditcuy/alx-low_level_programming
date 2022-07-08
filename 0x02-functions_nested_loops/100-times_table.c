#include <stdio.h>
#include "main.h"

/**
* print_times_table - Prints times table from 0 - 15
* @n: Integer argument
* Return: null Success
*/
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, z, output;

		for (i = 0; i < n; i++)
		{
			for (z = 0; z < n; z++)
			{
				output = z * i;

			if (z == 0)
				_putchar('0' + output);
			else if (output >= n)
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
			if (z != n)
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
