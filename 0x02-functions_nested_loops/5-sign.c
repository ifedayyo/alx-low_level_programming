#include "main.h"


/**
 * print_sign - print the sign of a number
 * @n: the number to be checked for
 * Return: 1 if the number is positive
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}