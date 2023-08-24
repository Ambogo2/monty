#include "monty.h"

/**
*tokenize - tokenizes the line read from stream
*/

void tokenize(void)
{
	int i = 0;
	char *delimiters = " \n";
	char *token = NULL, *linecpy = NULL;

	linecpy = malloc(sizeof(char) * (strlen(arguments->line) + 1));
	if (linecpy == NULL)
	{
		malloc_failed();
	}
	strcpy(linecpy, arguments->line);
	arguments->tokens_num = 0;
	token = strtok(linecpy, delimiters);

	while (token)
	{
		arguments->tokens_num += 1;
		token = strtok(NULL, delimiters);
	}

	arguments->tokens = (char **)malloc(sizeof(char *) * (arguments->tokens_num + 1));
	if (arguments->tokens == NULL)
	{
		malloc_failed();
	}

	strcpy(linecpy, arguments->line);
	token = strtok(linecpy, delimiters);
	while (token)
	{
		arguments->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (arguments->tokens[i] == NULL)
		{
			malloc_failed();
		}
		strcpy(arguments->tokens[i], token);
		token = strtok(NULL, delimiters);
		i++;

	}
	arguments->tokens[i] = NULL;
	free(linecpy);
}
