#include "monty.h"

/**
 * free_stackt - check the code
 * @head: the list
 */
void free_stackt(stack_t *head)
{
	stack_t *myh = head;
	stack_t *nestmyh = NULL;

	if (head != NULL)
	{
		myh = myh->next;
		free(head);
	}
	while (myh != head && myh != NULL)
	{
		nestmyh = myh->next;
		free(myh);
		myh = nestmyh;
	}
}
