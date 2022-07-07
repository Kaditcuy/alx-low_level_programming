#include <stdio.h>
#include "main.h"

/**
* print_diagonal -  prints diagonal lines
* @n: Takes Integer parameter
* Return: null Success
*/
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
}
