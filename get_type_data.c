#include "main.h"

int (*get_type_data(char t))(va_list, char **buff)
{
    int i = 0;
    tp_d tp[] = {
        {'s', _string},
        {'c', _char},
        {0, NULL}
    };

    while (tp[i].f != NULL)
    {
        if (t == tp[i].td)
        {
            //estoy retornando un puntero que apunta a esa funcion 
            return (tp[i].f);
        }
        i++;
    }
    return (0);
}
