#ifndef STDARG
#define STDARG
#include <stdarg.h>
#endif


#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
typedef struct str_op
{
	char *op;
	void(*f)(va_list);
} oper;
void print_all(const char * const format, ...);
void _int(va_list);
void _char(va_list);
void _float(va_list);
void _str(va_list);

#endif /*_VARIADIC_FUNCTIONS_H */
