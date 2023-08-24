#include "monty.h"

/**
*rotl - function that rotates the stack to the top
*@stack: pointer to the stack
*@line_number: number where rotl function is called
*/

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	(void) line_number;

	if (arguments->stack_length < 2)
	{
		return;
	}

	temp1 = arguments->head;
	temp2 = temp1->next;

	while (temp2)
	{
		if (temp2->next == NULL)
		{
			temp2->next = arguments->head;
			arguments->head->prev = temp2;
			arguments->head = temp2;
			temp1->next = NULL;
			temp1->prev = NULL;
			break;
		}
		temp2 = temp2->next;
	}

}
