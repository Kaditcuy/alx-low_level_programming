#include <stdio.h>
#include "main.h"

/**
* _print_rev_recursion - Function to reverse a string
* @s: Pointer to char argument
* Return: null if nop characters are  parsed as argument
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
