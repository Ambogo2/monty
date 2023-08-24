#include "monty.h"

/**
*execute_instruction - executes instructions specified by the arguments
*/

void execute_instruction(void)
{
	stack_t *stack = NULL;

	if (arguments->tokens_num == 0)
	{
		return;
	}
	arguments->instruction->f(&stack, arguments->line_num);
}
