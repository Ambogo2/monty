#include "monty.h"

/**
*rotr - function that rotates the stack to the bottom
*@stack: pointer to the stack
*@line_number: number where mul function is called
*/
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *last;

	(void) stack;
	(void) line_number;

	if (arguments->stack_length < 2)
	{
		return;
	}

	temp = arguments->head;

	while (temp)
	{
		if (temp->next == NULL)
		{
			last = temp;
			break;
		}
		temp = temp->next;
	}
	last->prev->next = NULL;
	last->next = arguments->head;
	last->prev = NULL;

	arguments->head = last;

}
