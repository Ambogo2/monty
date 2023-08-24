#include "monty.h"

/**
*check_args_number - checks the number of arguments
*@argc:number of arguments
**/
void check_args_number(int argc)
{
	if (argc == 2)
	{
		return;
	}
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);

}
