#include "monty.h"

/**
*sub - function that removes the stack
*@stack:a poiter to the stack
*@line_number: the number where pop function is called
*/

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	temp1 = arguments->head;
	temp2 = temp1->next;

	temp2->n = temp2->n - temp1->n;
	delete_node();

	arguments->stack_length -= 1;
}
