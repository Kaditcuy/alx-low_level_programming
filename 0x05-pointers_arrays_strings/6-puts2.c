#include <stdio.h>
#include "main.h"

/**
* puts2 - returns characters of a string in 2's
* @str: char argument
* Return: null Success
*/
void puts2(char *str)
{
	int counter;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (counter = 0; counter < i; counter++)
	{
		if (i % 2 != 0)
				continue;
			_putchar(str[i]);
	}
	_putchar('\n');
}
