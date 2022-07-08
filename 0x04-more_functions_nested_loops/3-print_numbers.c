/*
* File: 3-print_numbers.c
* Auth: muhandasa
*/

#include "main.h"

/**
* print_numbers - print 0123456789
*
* Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
