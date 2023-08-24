#include "monty.h"

/**
*read_instruction - reads instruction from stream
*/

void read_instruction(void)
{
	int i;
	instruction_t opcodes[] = {
		{"push", &push},
		{"pall", &pall},
		{"add", &add},
		{"nop", &nop},
		{"pint", &pint},
		{"swap", &swap},
		{"sub", &sub},
		{"div", &division},
		{"mul", &mul},
		{"mod", &mod},
		{"pop", &pop},
		{"rotl", &rotl},
		{"stack", &stack},
		{"pstr", &pstr},
		{"rotr", &rotr},
		{"queue", &queue},
		{"pstr", &pstr},
		{NULL, NULL}
	};

	if (arguments->tokens_num == 0)
	{
		return;
	}
	for (i = 0; opcodes[i].opcode != NULL; i++)
	{
		if (strcmp(opcodes[i].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instruction = &opcodes[i];
			return;
		}
	}
	invalid_instruction();
}
