#include "main.h"

/**
 * main - Adds positives numbers
 * @argc: Argument counter
 * @argv: Array of pointer to strings
 *
 * Return: 0 if no errors, else
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
					return (0);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
