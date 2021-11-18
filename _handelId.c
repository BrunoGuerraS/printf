#include "main.h"
/**
 * print_number - select a number
 * @n: long int
 * @add: double pointer
 * Return: 0
 */
int print_number(long int n, char **add)
{
	unsigned int r;
	int _length = 0;

	if (n < 0)
	{
		**add = 45;
		(*add)++;
		n *= -1;
		_length++;
	}
	r = n;

	if (r / 10)
	{
		_length += print_number(r / 10, add);
	}
	**add = r % 10 + '0';
	(*add)++;
	return (0);
}
/**
 * _handelId - handle int and d
 * @tp: va_list
 * @buff: buffer
 * Return: handel function
 */
int _handelId(va_list tp, char **buff)
{
	int dato = va_arg(tp, int);

	print_number(dato, buff);
	return (0);
}
