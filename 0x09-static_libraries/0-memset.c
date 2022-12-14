/*
* File: 0-memset.c
* Auth: not
*/

#include "main.h"
#include <stddef.h>

/**
* _memset - Fills the n bytes of the memory area
*	pointed to by @s with the constant byte @c.
* @s: A pointer to the memory area to be filled
* @c: The character to fill the memory.
* @n: The number of bytes to be filled.
* description _memset: over there
* Return: A pointer to the filled memory area @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
