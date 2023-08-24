#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

vars_t *arguments = NULL;

/**
*main - entry
*@argc: number of arguments
*@argv: pointer to array with arguments
*Return: Always 0
*/

int main(int argc, char *argv[])
{

	check_args_number(argc);
	args_initialization();
	get_stream(argv[1]);

	while (fgets(arguments->line, sizeof(arguments->line), arguments->stream) != NULL)
	{
		arguments->line_num += 1;
		tokenize();
		read_instruction();
		execute_instruction();
		free_tokens();
	}

	close_stream();
	free_arguments();

	return (0);
}
