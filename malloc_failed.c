#include "monty.h"

/**
*malloc_failed - a function that prints error when malloc fails
**/

void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
