#include "main.h"

/**
 * _printf - print the formatted text
 * @format: format specifier
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	var_list args;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
}
