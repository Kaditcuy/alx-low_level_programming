#include <stdio.h>
#include "main.h"

/**
* print_alphabet - Function to print lowerCase
* main - Entry point
*Return: 0 Success
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

int main(void)
{
	print_alphabet();
	return (0);
}

