#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: Character to print
 * Return: 1 on success
 * On error, -1 is returned and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
