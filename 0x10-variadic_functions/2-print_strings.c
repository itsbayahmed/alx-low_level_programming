#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings.
 *
 * @separator:  The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Nothing (void).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
}

