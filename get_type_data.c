#include "main.h"
//funcion recibe una cadena y retorna un puntero a funcion que tiene como parametro va_list 
//va_list coresponde al valor de retorno
//(va_list) lo estamos usando para el retorno 
int (*get_type_data(char t))(va_list, char **buff)
{
    int i = 0;
    //validar el valor de retorno si hizo match 

     tp_d tp[] = {
        {'s', _string},
        // {'c', _char},
        {0, NULL}
    };
    //
    //hasta que llegue a {0, NULL} donde rompe
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