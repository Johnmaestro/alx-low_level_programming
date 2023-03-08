#include "main.h"
/**
 * _sqrt_recursion - function to calculate sqrt
 * @n: number whose sqrt is to be calculated
 * @i: no. to iterate through
 * Return: returns the sqrt
 *
 */
int sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 0));
}

/**
 * sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}

