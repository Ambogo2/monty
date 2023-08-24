#include "monty.h"

/**
*close_stream - fuction that closes file stream and sets it to null
*/

void close_stream(void)
{
	if (arguments->stream == NULL)
	{
		return;
	}
	fclose(arguments->stream);
	arguments->stream = NULL;
}
