#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	int n;

	if (c > 0 || c == 0)
	{
	n = _putchar (c % 10 + '0');
	return (n);
	}
	else
	{
	c = c * -1;
	n =_putchar (c % 10 + '0');
	return (c % 10);
	}
}
