#include "monty.h"

/**
*invalid_instruction - function that handles unkown instruction error
**/

void invalid_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", arguments->line_num, arguments->tokens[0]);
	close_stream();
	free_tokens();
	free_arguments();
	exit(EXIT_FAILURE);
}
