#include "monty.h"

/**
*stream_failure - a function that prits error if getting stream fails
*@filename:a file that fails to open
**/

void stream_failure(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
*get_stream - a function that reads from file stream
*@filename: a file where the function reads from
*/

void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		stream_failure(filename);
	}
	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		stream_failure(filename);
	}
}
