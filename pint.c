#include "monty.h"

/**
 * pint - a function that prints elements at the top
 * @stack: a pointer to the stack
 * @line_number: the number where pint function is called
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", arguments->head->n);
}
