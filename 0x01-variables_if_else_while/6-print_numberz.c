#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}