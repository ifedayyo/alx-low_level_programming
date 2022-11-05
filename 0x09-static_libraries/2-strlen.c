#include <stdio.h>
#include "main.h"

/**
 * _strlen - function for counting the length of stirng
 * @s: a pointer for counting the starting length
 * Author: Ife
 * Return: int i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
