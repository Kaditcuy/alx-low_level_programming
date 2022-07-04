#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++) /**0123456789*/
	{
		for (n = 49; n <= 57; n++) /**123456789*/
		{
			if (n > ch)   
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
