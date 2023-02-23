#include <stdio.h>


/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && a > c)
    {
	    return (a);
    }
    else if (b > a && b > c)
    {
	    return (b);
    }
    else
    {
        return (c);
    }
}
int main(void)
{
	int a, b, c;

	a = 10;
	b = -20;
	c = 0;
	int greater = largest_number(a, b, c);
	printf("%d is the greatest\n", greater);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("%d\n", 10 > -20);
}
