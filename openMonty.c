#include "monty.h"

/**
 * openMonty - check the code
 * @file: the file to open
 * Return: the descriptor for file
 */
FILE *openMonty(char *file)
{
	FILE *stream;

	stream = fopen(file, "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	return (stream);
}
