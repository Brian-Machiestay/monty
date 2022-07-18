#include "monty.h"

/**
 * testvalue - check the code
 * @stack: the stack
 * @val: the value to push
 * @op: the opcode
 * @line: the line number
 * @str: the file stream
 */
void testvalue(stack_t **stack, char *val, char *op, int line, FILE *str)
{
	size_t m;
	size_t n;
	char *string = "abcdefghijklmnopqrstuvwxyz";

	for (m = 0; m < strlen(val); m++)
	{
		for (n = 0; n < strlen(string); n++)
			if (string[n] == val[m])
				free_stack_opcode(stack, op, line, str);
	}
}
