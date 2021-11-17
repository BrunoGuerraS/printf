#include "main.h"
/**
 * _handelId - handle int and d
 * @tp: va_list
 * @buff: buffer
 * Return: handel function
 */

int print_number(long int n, char **add)
{
    unsigned int r;
    int _length = 0;

    if (n < 0)
    {
        **add = 45;
        (*add)++;
        /*_putchar(45);*/
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
    /*_putchar(r % 10 + '0');*/
    return (0);
}

int _handelId(va_list tp, char **buff)
{	
	int dato = va_arg(tp, int);

	print_number(dato, buff);
	return (0);
}
