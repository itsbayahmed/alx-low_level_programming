#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - A variadic function that prints numbers
 *    with a separator.
 *
 * @separator: A string that will be printed betwwen
 *    the numbers.
 * @n: The number of numbers to print.
 *
 *  Return: Nothing (void).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(args);
}

