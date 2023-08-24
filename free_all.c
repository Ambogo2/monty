#include "monty.h"

/**
* free_all_args - frees all memory allocated
*/
void free_all_args(void)
{
	close_stream();
	free_tokens();
	free_arguments();
}
