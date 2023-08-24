#include "monty.h"

/**
*pchar - function that prints char at the top of stack
*@stack: pointer to the stack
*@line_number: number where mul function is called
*/

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1;

	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arguments->head;

	if (temp1->n < 0 || temp1->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp1->n);
}
