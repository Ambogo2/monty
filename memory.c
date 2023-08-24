#include "monty.h"

/**
 * free_arguments - frees allocated memory in the arguments structure
 */
void free_arguments(void)
{
	if (arguments == NULL)
	{
		return;
	}
	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}
	free_head();
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);
}
