#include <stdio.h>
#include "main.h"

/**
* print_line - Prints line on the terminal
* @n: integer parameter
* Return: null success
*/
void print_line(int n)
{
	int x;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(95);
		_putchar('\n');
	}
}
