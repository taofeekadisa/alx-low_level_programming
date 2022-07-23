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

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

