#include <stdio.h>
#include "main.h"

/**
* puts_half - prints half of an inputted string
* @str: Takes a char argument
* Return: null Success
*/
void puts_half(char *str)
{
	int i,half;
	int c = 0;

	/** 
	* Lenght of array of characters = Strings
	*/

	while (str[c] != '\0')
	{
		c++;
	}
	
	if (c % 2 == 0)
	{
		for (i = c / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half = (c - 1) / 2;
		for (i = half + 1; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
