#include "main.h"


/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: 0
*/

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
