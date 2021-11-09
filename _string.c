#include "main.h"

//mas inportante que va a retornar 
//tp tenemos que castearlo 
//a esta funcion le estan pasndo la lista de argumentos 
int _string(va_list tp, char **buff)
{
    int count = 0;
    //cada llamada lo movia por argumento
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

