#include "monty.h"

/**
*pop - a fuction that removes elements from the stack
*@stack:a poiter to the stack
*@line_number: the number where pop function is called
*/

void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (arguments->head == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	delete_node();
	arguments->stack_length -= 1;
}
