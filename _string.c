#include "main.h"
/**
 * _string - handle a strings
 * @tp: va_list;
 * @buff: buffer
 * Return: count
 */
int _string(va_list tp, char **buff)
{
	int count = 0;

	char *dato = va_arg(tp, char*);

	while (*dato != '\0')
	{
		**buff = *dato;
		(*buff)++;
		dato++;
		count++;
	}
	return (count);
}
