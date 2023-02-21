#include "main.h"
#include <limits.h>
/**
 * print_last_digit -  printts the last digit
 *
 * @num: the number is passed to this parameter
 *
 * Return: returns the last digit
 */
int print_last_digit(int num)
{
	int m;

	if (num < 0)
	{
		m = -num % 10;
		_putchar('0' + m);
		return (m);
	}
	else if (num == INT_MIN)
	{
		_putchar('8');
		return ('8');
	}
	else
	{
		m = num % 10;
		_putchar('0' + m);
		return (m);
	}
}
