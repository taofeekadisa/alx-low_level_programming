#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 *
 * @s: The pointer of char
 *
 * Return: The value length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
