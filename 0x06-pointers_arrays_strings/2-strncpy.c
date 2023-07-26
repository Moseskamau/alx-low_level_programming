#include "main.h"


/**
 * _strncpy - Copies an inputted number
 * bytes of string from src to dest
 * @dest: Buffer storing string copy
 * @src: The source string
 * @n: maximum number of bytes to be copied from src
 * Return: A pointer to the resulting dest
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
