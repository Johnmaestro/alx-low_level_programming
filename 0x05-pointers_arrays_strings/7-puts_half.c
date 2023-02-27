#include "main.h"
/**
 *
 *
 */
void puts_half(char *str)
{
	int len = 0, i = 0;
	int start;

	while (*(str + len) != '\0')
	{
		len++;
	}
	start = len / 2;
	for (i = start; i <= len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
