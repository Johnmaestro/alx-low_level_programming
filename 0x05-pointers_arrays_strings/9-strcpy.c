#include "main.h"
/**
 * *_strcpy - function to copy string
 *
 * @dest: destination
 * @src: source
 * Return: returns the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
