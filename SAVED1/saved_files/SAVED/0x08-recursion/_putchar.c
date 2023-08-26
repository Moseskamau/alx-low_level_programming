#include <unistd.h>

/**
 * This is my _putchar.c
 * _putchar - Writes character c to stdout.
 * @c: Character to print
 *
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
