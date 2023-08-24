#include "monty.h"

/**
 *is_number - a function that checks for valid integer
*@str: string to be checked
*Return: 1 if its a string, 0 otherwise
*/
int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
