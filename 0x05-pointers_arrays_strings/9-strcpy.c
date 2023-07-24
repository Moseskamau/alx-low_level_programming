#include "main.h"

/**
 * _strcpy - Will copy the string
 * @dest: The destination value
 * @src: The source value
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
	{
	dest[y] = src[y];
	}
	dest[y++] = '\0';
	return (dest);
}
