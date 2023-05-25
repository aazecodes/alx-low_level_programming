#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: variable number of strings to be printed.
 * Description: to print string if all conditions are met
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int comp = 0;
	char *str;

	va_start(string, n);

	while (comp < n)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (comp != (n - 1) && separator != NULL)
			printf("%s", separator);

		comp++;
	}
	printf("\n");
	va_end(string);
}
