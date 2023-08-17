/**
 *
 *
 *
 */
#include "3-calc"
int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-",op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (ops[i].ops == *s)
			return (ops[i].f);
		i++
	}
	return (NULL);
		
}
