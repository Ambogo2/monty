#include "monty.h"

/**
*push - a function that pushes an integer to the stack
*@stack:a pointer to the stack
*@line_number: the number where push function is called
*/

void push(stack_t **stack, unsigned int line_number)
{
	if (arguments->tokens_num < 2 || !is_number(arguments->tokens[1]))
	{
		free_arguments();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		malloc_failed();
	}
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = atoi(arguments->tokens[1]);
	if (arguments->head != NULL)
	{
		(*stack)->next = arguments->head;
		arguments->head->prev = *stack;
	}
	arguments->head = *stack;
	arguments->stack_length += 1;
}
