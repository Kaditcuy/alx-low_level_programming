#include <stdio.h>
#include "main.h"

/**
* reverse_array - Reverse n elements of an array
* @a: Int argument
* @n: Int argument
* Return: null Succes
*/
void reverse_array(int *a, int n)
{
	int i, tempVal, last;

	i = 0;
	last = n - 1;
	while (i < last)
	{
	/**
	*Swap positions of array moving from last character with array moving
	*from first character
	*/
		tempVal = *(a + i);
		*(a + i) = *(a + last);
		*(a + last) = tempVal;
		i++;
		last--;
	}
}
