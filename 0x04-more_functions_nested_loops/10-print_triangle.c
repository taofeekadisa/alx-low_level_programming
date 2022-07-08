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
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
