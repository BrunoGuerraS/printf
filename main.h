#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
/**
 * struct typeData - handle mach's functions
 * @td: char
 * @f: pointer to function that handle type data
 */
typedef struct typeData
{
char td;
int (*f)(va_list, char **buff);
} tp_d;

int _putchar(char *buff, int size);
int _puts(char *str);
int (*get_type_data(char t))(va_list, char **buff);
int _string(va_list tp, char **buff);
int _char(va_list tp, char **buff);

int _printf(const char *format, ...);

#endif
