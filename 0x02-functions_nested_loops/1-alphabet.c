#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Function to print lowerCase
*
* Return: null Success
*/
void print_alphabet(void)
{
	int lowAlpha;

	for (lowAlpha = 97; lowAlpha <= 122; lowAlpha++)
	{
		_putchar(lowAlpha);
	}
	_putchar('\n');
return;
}
