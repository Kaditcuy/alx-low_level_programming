#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints natural numbers
* @n: Integer argument
* Return: Null Success
*/
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d, ",n);
	/**	_putchar(44);
		_putchar(32); */
	}
	_putchar('\n');
}
