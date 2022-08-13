#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @c: occurance of the charcter
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (0);
}
