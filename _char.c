#include "main.h"
/**
 * _char - handle a char
 * @tp: va_list
 * @buff: buffer
 * Return: count
 */
int _char(va_list tp, char **buff)
{
	int count = 0;

	char dato = va_arg(tp, int);
	**buff = dato;
	(*buff)++;

	return (count + 1);
}
