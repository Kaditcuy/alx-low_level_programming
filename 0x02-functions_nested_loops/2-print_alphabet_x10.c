#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Prints lowCase alphabets 10 times
*
* Return: null Success
*/
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int lowAlpha;

		for (lowAlpha = 97; lowAlpha <= 122; lowAlpha++)
		{
			_putchar(lowAlpha);
		}
		_putchar('\n');
		n++;
	}
return;
}
