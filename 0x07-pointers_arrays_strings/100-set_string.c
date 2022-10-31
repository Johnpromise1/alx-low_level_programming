/*
* File: 100-set_string.c
* Auth: JP
*/

#include "main.h"
/**
* set_string - sets the value of a pointer to a char
* @s: The pointer
* @to: The char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
