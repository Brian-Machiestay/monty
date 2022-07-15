#include "monty.h"
/**
 * pall - check the code
 * @h: the list
 * Return: the number of elements
 */
size_t pall(stack_t *h)
{
	size_t count = 0;
	stack_t *myh = h;

	if (h != NULL)
	{
		printf("%d\n", myh->n);
		myh = myh->next;
		count++;
	}
	while (myh != h && myh != NULL)
	{
		printf("%d\n", myh->n);
		myh = myh->next;
		count++;
	}

	return (count);
}
