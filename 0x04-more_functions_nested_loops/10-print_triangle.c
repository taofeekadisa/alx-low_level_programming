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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (hash = 0; hash < size; hash++)
		{

			for (index = 0; index < hash; index++)
				_putchar('32');

			if (index == 0)
				_putchar(35);
		}

		_putchar('\n');
	}
}
