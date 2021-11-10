#include "main.h"
/**
 * get_type_data - genereited mach
 * @t: char
 * Return: pinter to function
 */
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
			return (tp[i].f);
		}
		i++;
	}
	return (0);
}
