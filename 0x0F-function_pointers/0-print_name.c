#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints name passed to it
 * @name: char to display to the stdout
 * @f: a poointer function
 * author: Ife
 * Return: no teturn since void is declared as R_TYPE
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
