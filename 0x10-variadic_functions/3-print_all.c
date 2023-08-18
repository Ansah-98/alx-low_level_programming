/**
 * _int - returns an ints
 * @val: value
 * Return: nothing
 *
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void _int(va_list val)
{
	printf("%d", va_arg(val, int));
}
/**
 * _char - characters
 * @val: value
 * Return: nothing
 */
void _char(va_list val)
{
	printf("%c", va_arg(val, int));
}
/**
 * _float - floating numbers
 * @val: value
 * Return: nothing
 */
void _float(va_list val)
{
	printf("%f", va_arg(val, double));
}
/**
 * _str - strings testing
 * @val: value
 * Return: nothing
 *
 */
void _str(va_list val)
{
	char *r;

	r = va_arg(val, char *);
	switch (!r)
	{
		case 0:
			printf("%s", r);
			break;
		case 1:
			printf("(nil)");
			break;
	}

}
/**
 * print_all - prints all kinds of types
 * @format: array of characters
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	oper ops[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _str},
		{NULL, NULL}
	};
	va_start(ap, format);
	i = j = 0;

	while (format && format[j])
	{
		i = 0;
		while (ops[i].op)
		{
			if (ops[i].op[0] == format[j])
			{
				(ops[i].f)(ap);
				if (format[j + 1])
					printf(", ");
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}

