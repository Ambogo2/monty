#include "monty.h"

/**
*add - function that adds to the stack'
*@stack:a poiter to the stack
*@line_number: the number where pop function is called
*/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	temp1 = arguments->head;
	temp2 = temp1->next;

	temp2->n = temp1->n + temp2->n;
	delete_node();

	arguments->stack_length -= 1;
}
