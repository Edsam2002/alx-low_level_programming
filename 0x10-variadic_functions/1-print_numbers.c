#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int s;

	va_start(valist, n);

	for (s = 0; s < n; s++)
	{
	printf("%d", va_arg(valist, int));
	if (separator && s < n - 1)
	printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
