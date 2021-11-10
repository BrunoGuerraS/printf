#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @buff: buffer
 * @size: size of characters
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *buff, int size)
{
	return (write(1, buff, size));
}
