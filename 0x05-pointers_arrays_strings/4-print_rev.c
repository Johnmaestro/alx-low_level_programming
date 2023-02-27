#include "main.h"
/**
 *
 *
 */
void print_rev(char *s)
{
	int i = 0;

	int b;

	while (*(s + i) != '\0')
	{
		++i;
	}
	for (b = i; b >= 0; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');
}
