#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String to be treated
 * Return: Void
 */

void puts2(char *str)

{

	int d;
	int s = 0;

	while (str[s] != '\0')
	{
	s++;
	}

	for (d = 0; d < s; d += 2)
	{
	 _putchar(str[s]);
	}
	_putchar('\n');
}
