#include "main.h"
#include <stdlib.h>


unsigned int binary_to_uint(const char *b)
{
	unsigned int final = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		result = (b[i] == '0') ? (result << 1) : (result << 1) | 1;
		if if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	return (result);
}



