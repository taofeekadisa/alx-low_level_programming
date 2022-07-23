#include "main.h"

/**
 * main - The entry point
 * @argc: Argument counter
 * @argv: Array of pointer to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
