#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function to create an array
 * @size: size of the array
 * @c: character to be filled in the array
 * Return: returns the array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		printf("Failed to allocate memory\n");
		return (NULL);
	}
	for (; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
