#include "monty.h"

/**
 * push - pushes a value from monty onto the stack
 * @head: the stack
 * @line: the current line
 * @strval: the value to push
 * @opcode: the opcode
 * @str: the monty file stream
 */
void push(stack_t **head, char *strval, char *opcode, int line, FILE *str)
{
	stack_t *newNode;
	int n;

	if (strval == NULL)
	{
		free_stack_opcode(head, opcode, line, str);
	}
	testvalue(head, strval, opcode, line, str);
	n = atoi(strval);
	if ((strcmp(strval, "0") != 0) && n == 0)
		free_stack_opcode(head, opcode, line, str);
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		free_stackt(*head);
		free(opcode);
		fprintf(stderr, "Error: malloc failed\n");
		fclose(str);
		exit(EXIT_FAILURE);
	}

	newNode->n = n;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	newNode->prev = NULL;
	*head = newNode;
}
