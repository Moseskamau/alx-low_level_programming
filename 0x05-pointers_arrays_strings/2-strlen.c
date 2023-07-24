#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - Returns the length of a string
 * @s: String to get length of
 * Return: The length of @str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
