/*
* File: 1-isdigit.c
* Auth: muhandasa
*/

#include "main.h"

/**
* _isdigit - checks for the characters that are digits (0-9).
* @c: The number to be checked.
*
* Return: ! if the number is a didgit, 0 otherwise.
*/
int _isdidgit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
