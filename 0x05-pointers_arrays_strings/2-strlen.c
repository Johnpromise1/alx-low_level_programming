#include "main.h"

/**
* _strlen - returns the lenght of the string
* @s: string
* Return: lenght
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
