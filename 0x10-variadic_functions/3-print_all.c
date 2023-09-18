#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "variadic_functions.h"
/**
 * print_all - A variadic function that prints all of its arguments.
 *
 * @format:  a string that contains various format specifiers.
 *
 * * Return: Nothing (void).
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
	bool validSpecifier = false;

	va_start(args, format);

	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				validSpecifier = true;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				validSpecifier = true;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				validSpecifier = true;
				break;
			case 's':
				printf("%s", va_arg(args, char*));
				validSpecifier = true;
				break;
			default:
				validSpecifier = false;
				break;
		}
		if (validSpecifier && format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}


