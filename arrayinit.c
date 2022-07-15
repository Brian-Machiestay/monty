#include "monty.h"
/**
 * arrayinit - check the code
 * @s: the array
 * @size: the string
 */
void arrayinit(char **s, int size)
{
	int i = 0;

	while (i < size)
		s[i++] = NULL;
}
