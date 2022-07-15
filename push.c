#include "monty.h"

/**
 * push - pushes a value from monty onto the stack
 * @head: the stack
 * @line: the current line
 * @strval: the value to push
 */
void push(stack_t **head, char *strval, int line)
{
	stack_t *newNode;
	int n;

	if (strval == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
	n = atoi(strval);
	if ((strcmp(strval, "0") != 0) && n == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	newNode->n = n;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	newNode->prev = NULL;
	*head = newNode;
}
