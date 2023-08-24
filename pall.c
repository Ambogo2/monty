#include "monty.h"

/**
*pall - a function that prints stack elements
*@stack:a pointer to the stack
*@line_number: the number where pall function is called
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (arguments->head == NULL)
	{
		return;
	}
	(void) (line_number);
	(void) (stack);

	temp = arguments->head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
