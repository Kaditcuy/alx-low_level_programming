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

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{		product = num1 * num2;
				printf("%d", product);
				putchar(44);
				putchar(32);
				putchar(32);
		}
		putchar('\n');
	}
return;
}
