#include <stdio.h>
#include "main.h"

/**
*print_chessboard - prints a  chessboard
*@(*a)[8]: char argument of array of n rows and 8 columns
*@a: char argument
*Return: Mulit-dimensional Array
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);

			if (j == 7)
				_putchar('\n');
		}
	}
}
