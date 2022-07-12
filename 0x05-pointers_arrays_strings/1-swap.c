#include <stdio.h>
#include "main.h"

/**
* swap_int - DFunction to swap the values of two integers
* @a: argument that points to an integer
* @b: argument that points to an integer
* Return: null Success
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
