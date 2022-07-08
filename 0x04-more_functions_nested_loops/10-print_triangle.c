/*
* File: 10-print_traingle.c
* Auth: muhandasa
*/

#include "main.h"

/**
* print_traingle - entry point
*
* Description: Prints diagonal
* @size: size of the traingle
* Return: void
*/

void print_traingle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			for (j = 0)
				_putchar(35)
		}
		_putchar('\n');

	}
}
