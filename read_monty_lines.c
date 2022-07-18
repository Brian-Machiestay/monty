#include "monty.h"
#include <stdio.h>

/**
 * read_monty_lines - check the code
 * @stream: monty file descriptor
 * @stack: the stack
 */
void read_monty_lines(FILE *stream, stack_t **stack)
{
	int line_counter = 1;
	size_t n = 0;
	int line = 1;
	char *opcode = NULL;
	char *sep_ret;

	while ((line = getline(&opcode, &n, stream)) != -1)
	{
		*(opcode + (line - 1)) = '\0';
		if (*opcode == '\0')
		{
			line_counter++;
			continue;
		}
		sep_ret = execute_opcode(stack, &opcode, line_counter, stream);
		line_counter++;
		if (sep_ret == NULL)
			continue;
	}
	free(opcode);
}
