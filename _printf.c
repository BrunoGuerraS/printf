#include "main.h"
/**
 * _printf - print anything
 * @format: string
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list conten;
	int i = 0, (*f)(va_list, char **buff);
	char buffer[2500]; char *ptrb = buffer;

	va_start(conten, format);
	if ((format == NULL) || (*(format) == '%' && *(format + 1) == '\0'))
		return (-1);
	if (*(format) == '\0')
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			f = get_type_data(format[i + 1]);
			if (f != 0)
			{
				f(conten, &ptrb);
				i  += 2;
				continue;
			}
			if (format[i + 1] == '%')
			{
				*ptrb = '%';
				ptrb++;
				i += 2;
				continue;
			}
		}
		*ptrb = format[i];
		ptrb++;
		i++;
	}
	va_end(conten);
	return (_putchar(buffer, ptrb - (char *)buffer));
}
