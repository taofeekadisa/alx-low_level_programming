#include "main.h"
/**
 * factorial - Function returns the factorial of a given number
 * @n: lower than 0, the function should return -1 to indicate an error
 *
 * Return: The value factorial
 */

int factorial(int n)
{
	int output = n;

	if (n < 0)

		return (-1);

	else if (n >= 0 && n <= 1)

		return (1);

	else

		output *= factorial(n - 1);

	return (output);
}

