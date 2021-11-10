#include "main.h"
/**
 * _printf - print anything
 * @format: string
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list conten;
	int i = 0;
	int (*f)(va_list, char **buff);
	int count = 0;
	char buffer[2500];
	char *ptrb = buffer;

	va_start(conten, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			f = get_type_data(format[i + 1]);
			if (f != 0)
			{
				count += f(conten, &ptrb);
				i++;
			}
			if (format[i + 1] == '%')
			{
				*ptrb = '%';
				ptrb++;
			}
		}
		else
		{
			*ptrb = format[i];
			ptrb++;
			count++;
		}
		i++;
	}

	_putchar(buffer, ptrb - (char *)buffer);

	va_end(conten);

	return (count);
}
