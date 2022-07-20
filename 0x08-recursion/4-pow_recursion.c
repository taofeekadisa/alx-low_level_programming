#include "main.h"

/**
 * _pow_recursion - Function that returns
 * The value of x raised to the power of y
 *
 * @y: If y is lower than 0, the function should return -1
 * @x: The number to be incremented
 * Return: the 0 value
 */
int _pow_recursion(int x, int y)
{
	int output = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	output *= _pow_recursion(x, y - 1);

	return (result);
}
