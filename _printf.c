#include "main.h"
/*
    * _printf - print anything
    * @format: string
    * Return: 0
 */
int _printf(const char *format, ...)
{
    //va_list contiene los argumentos dentro de los ...
    va_list conten;
    int i = 0;
    int (*f)(va_list, char **buff);
    int count = 0;
    char buffer[2500];
    char *ptrb = buffer;
    //va_start funciona como limite 
    va_start(conten, format);
    //esta iterando todo el string
    while (format[i])
    {
        if (format[i] == '%')
        {   //format sigue siendo el string y le sumo la y para la posicion 
            //f contiene el puntero que devolvio mi get_ty que en el ejemplo es _string.c
            f = get_type_data(format[i + 1]);
            if(f != 0)
            {
                //f(cosa-)esta inicializando en el ejemplo _string 
                //ya me esta devolviendo la cantidad de caracteres del puts
                count += f(conten, &ptrb);
                i++;
            }
        }
        else 
        {
            //va a desreferenciar el buffer (asignar valores al buffer)
            *ptrb = format[i];
            //mover el puntero constantemente para evitar que no contabilice bien 
            //si no se mueve vas a ir desreferenciando la misma pos
            ptrb++;
            count++;
        }
        i++;
    }

    _putchar(buffer, ptrb - (char *)buffer);
    
    va_end(conten);

    return (count);
}

//_printf("%s %s hola mundo", "this", "all")