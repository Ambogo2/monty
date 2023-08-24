#include "monty.h"

/**
 * free_head - frees head memory
 */
void free_head(void)
{
	if (arguments->head)
	{
		free_stack(arguments->head);
	}
	arguments->head = NULL;
}
