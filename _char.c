#include "main.h"


int _char(va_list tp, char **buff)
{
    int count = 0;
    
    char dato = va_arg(tp, int);
    **buff = dato;
    (*buff)++;

    return (count + 1);
    
}