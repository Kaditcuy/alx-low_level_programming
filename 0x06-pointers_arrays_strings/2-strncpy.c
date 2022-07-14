#include <stdio.h>
#include "main.h"
/**
* _strncpy - Copies a string to a pointer chhar variable
* @dest: char argument
* @src: char argument
* @n: int argument
* Return: dest string containing the copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_length = 0;

	while (*(src + src_length) != '\0')
	{
		src_length++;
	}

	for (i = 0; i < n && src_length; i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
