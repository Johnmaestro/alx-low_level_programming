#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - function to copy string to a new location
 * @str: string
 * Return: returns new address to new location
 *
 */
char *_strdup(char *str)
{
	int j = 0;
	size_t len = strlen(str);
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (char *) malloc(len * sizeof(str));

	if (len == 0)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
