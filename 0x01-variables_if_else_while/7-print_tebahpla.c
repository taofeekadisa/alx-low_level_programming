#include <stdio.h>

/**
* main - Prints the alphabets in reverse
*
* Return: Always 0 (Sucess)
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
