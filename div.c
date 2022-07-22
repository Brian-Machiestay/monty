#include "monty.h"

/**
 * divide - divides the second top element by the top element
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line
 * @stream: the monty file stream
 */
void divide(stack_t **stack, char *opcode, int line, FILE *stream)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		free(opcode);
		free_stackt(*stack);
		fclose(stream);
		fprintf(stderr, "L%d: division by zero\n", line);
		exit(EXIT_FAILURE);
	}
	n1 = pop(stack, opcode, line, stream);
	n2 = pop(stack, opcode, line, stream);
	result = n2 / n1;
	sprintf(textnum, "%d", result);
	push(stack, textnum, opcode, line, stream);
}
