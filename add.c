#include "monty.h"
/**
 * add - adds the two elements at the top of stack
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line no.
 * @stream: the monty file stream
 */
void add(stack_t **stack, char *opcode, int line, FILE *stream)
{
	int n1;
	int n2;
	int result;
	char textnum[20];

	if (*stack == NULL || (*stack)->next == NULL)
	{
		free(opcode);
		free_stackt(*stack);
		fclose(stream);
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	n1 = pop(stack, opcode, line, stream);
	n2 = pop(stack, opcode, line, stream);
	result = n1 + n2;
	sprintf(textnum, "%d", result);
	push(stack, textnum, opcode, line, stream);
}
