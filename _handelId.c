#include "main.h"
/**
 * _handelId - handle int and d
 * @tp: va_list
 * @buff: buffer
 * Return: handel function
 */
int _handelId(va_list tp, char **buff)
{
	int dato = va_arg(ptr, int);
	**buff = dato;
	(*buff)++

	return (0);
}
