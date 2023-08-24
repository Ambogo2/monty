#include "monty.h"

/**
*pstr - function that prints string at the top of stack
*@stack: pointer to the stack
*@line_number: number where pstr function is called
*/

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1;

	(void) stack;
	(void) line_number;

	temp1 = arguments->head;

	while (temp1 != NULL)
	{
		if (temp1->n <= 0 || temp1->n > 127)
		{
			break;
		}
		printf("%c", temp1->n);
		temp1 = temp1->next;
	}

	printf("\n");
}
