#include <stdio.h>
#include "main.h"

/**
*  _strlen_recursion - Returns length of a string
* @s: Pointe to char argument
* Return: Length of string
*/
int _strlen_recursion(char *s)
{
	int len;

	len = 1;
	if (*s == '\0')
	{
		return (0);
	}
	return (len + _strlen_recursion(s+len));
}
