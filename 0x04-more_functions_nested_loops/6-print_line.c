/*
* File: 6-print_line.c
* Auth: muhandasa
*/

#include "main.h"

/**
* print_line - Draws a straight line using the character _.
* @n: The number of _characters to be printed.
*/
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
