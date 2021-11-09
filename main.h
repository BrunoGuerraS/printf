#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>


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
//vamos a mover el buffer por todas partes y lo hacemos con los punterors
//
int _printf(const char *format, ...);

#endif
