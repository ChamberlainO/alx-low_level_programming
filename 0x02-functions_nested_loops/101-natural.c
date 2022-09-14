#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * Return: Always (Success)
 */
int main(void)
{
	int i, 
	int sum = 0;

	for (i < 1024)
	{
		for ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
