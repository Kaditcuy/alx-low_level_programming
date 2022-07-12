#include <stdio.h>
#include "main.h"

/**
* puts2 - returns characters of a string in 2's
* @str: char argument
* Return: null Success
*/
void puts2(char *str)
{
	int i;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
