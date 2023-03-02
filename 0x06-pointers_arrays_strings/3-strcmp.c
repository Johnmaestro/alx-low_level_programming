#include "main.h"
/**
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int num = 15;
	int m;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != 0)
		j++;

	if (i > j)
		num *= 1;
	if (j > i)
		num *= -1;
	if (j == i)
	{
		while (s1[m] != '\0')
		{
			if (s1[m] < s2[m])
			{
				num *= 1;
				break;
			}
			if (s1[m] > s2[m])
			{
				num *= -1;
				break;
			}
			else 
				num *= 0;
			m++;
		}
	}
	return (num);
}
