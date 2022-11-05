#include "main.h"
/**
 * _strcmp - compares two string.
 * @s1: pinter to first string
 * @s2: pointer to second sting
 *
 * Return: value less tahn 0 if string is less tahn the other
 * value greater tahn 0 if string is greater tahn the other
 * 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
