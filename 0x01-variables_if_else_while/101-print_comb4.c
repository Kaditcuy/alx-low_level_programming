#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;
	int d3;

	for (d1 = 48; d1 <= 57; d1++)
	{
	for (d2 = 49; d2 <= 57; d2++)
	{
	for (d3 = 50; d3 <= 57; d3++)
	{
		if (d2 > d1 && d3 > d2)
		{
			putchar(d1);
			putchar(d2);
			putchar(d3);
			if (d1 != 55 || d2 != 56 || d3 != 57)
			{
				putchar(44); /**ASCII code for comma*/
				putchar(32); /**ASCII code for space*/

			}
		}
	}
	}
	}

		putchar(10);
		return (0);
}


