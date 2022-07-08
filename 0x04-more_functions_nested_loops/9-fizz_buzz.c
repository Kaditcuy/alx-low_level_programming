#include <stdio.h>

/**
* main - Entry point
* Return: 0 Success
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
