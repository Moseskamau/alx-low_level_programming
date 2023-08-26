#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of parameters.
 * @n: No. of parameters passed to function.
 * @...: Variable no. of parameters to calculate sum of.
 *
 * Return: If n == 0 - 0.
 *         otherwise - sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
