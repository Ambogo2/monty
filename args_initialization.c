#include "monty.h"

/**
*args_initialization - a function to initialize a pointer to vars_t struct
*
**/

void args_initialization(void)
{
	arguments = malloc(sizeof(vars_t));
	if (arguments == NULL)
	{
		malloc_failed();
	}
	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
	{
		malloc_failed();
	}

	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->line_num = 0;
	arguments->tokens_num = 0;
	arguments->head = NULL;
	arguments->stack_length = 0;
	arguments->stack = 0;
}
