#include <stdio.h>
#include "main.h"

/**
* print_array - Prints elements of an array
* @a: Integer arguments
* @n: Integer arguments for no of elemnts
* Return: null Success
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	/**  n-1; means last value or last character of an array or string*/
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
