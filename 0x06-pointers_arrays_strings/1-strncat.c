#include "main.h"

/**
 * _strncat - Concatenates two strings
 * Number of bytes from src
 * @dest: String to be appended on
 * @src: String to be appended to dest
 * @n: Number of bytes from src to be appended
 *
 * Return: A pointer to the resulting dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);

}
