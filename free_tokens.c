#include "monty.h"

/**
*free_tokens - fuction that frees memory allocated
*/

void free_tokens(void)
{
	int i = 0;

	if (arguments->tokens == NULL)
	{
		return;
	}
	while (arguments->tokens[i])
	{
		free(arguments->tokens[i]);
		i++;
	}
	free(arguments->tokens);
	arguments->tokens = NULL;
}
