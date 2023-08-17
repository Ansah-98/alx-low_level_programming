/**
 *
 *
 *
 */
#define SRVG(X, S) (argv[X][0] == S)
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
int main(int argc,char *argv[])
{
	int a;
	int b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if ((SRVG(2, '/') || SRVG(2, '%')) && b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	resulted = (get_op_func(op))(a, b);
	printf("%d\n", resulted);

	return (0);
}
