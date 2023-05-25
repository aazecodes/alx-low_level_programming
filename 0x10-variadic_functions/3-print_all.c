#include "variadic_functions.h"
/**
* print_char - function to print character
* @arg: list of arguments
*/
void print_char(va_list arg)
{
	char alph;

	alph = va_arg(arg, int);
	printf("%c", alph);
}
/**
* print_int - fuction to print integer
* @arg: list of arguments
*/
void print_int(va_list arg)
{
	int fig;

	fig = va_arg(arg, int);
	printf("%d", fig);
}
/**
* print_float - a function to print float.
* @arg: list of arguments
*/
void print_float(va_list arg)
{
	float fig;

	fig = va_arg(arg, double);
	printf("%f", fig);
}
/**
* print_string - Prints a string.
* @arg: A list of arguments pointing to
*/
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 * Description: If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int a = 0, b = 0;
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);
	while (format && (*(format + a)))
	{
		b = 0;
		while (b < 4 && (*(format + a) != *(funcs[b].symbol)))
			b++;
		if (b < 4)
		{
			printf("%s", separator);
			funcs[b].print(args);
			separator = ", ";
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
