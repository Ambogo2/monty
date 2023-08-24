#include "monty.h"

/**
* delete_node - deletes a node
* Return: void
**/

void delete_node(void)
{
	stack_t *temp;

	temp = arguments->head;
	arguments->head = temp->next;
	free(temp);
}
