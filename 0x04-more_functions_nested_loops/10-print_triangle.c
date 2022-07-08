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
	int height, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; ++height)
		{
			for (base = 1; base <= size; ++base)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
