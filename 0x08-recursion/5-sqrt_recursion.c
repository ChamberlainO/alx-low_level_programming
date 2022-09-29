#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to be used.
 *
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - Calculate natural square root.
 * @n: Number to calculate the square.
 * @x: Iterate number.
 *
 * Return: The square root of n.
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
