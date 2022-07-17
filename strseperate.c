#include "monty.h"
/**
 * strseperate - check the code
 * @arr: the array to init
 * @str: the string to seperate
 * Return: the opcode or null
 */

char  *strseperate(char **arr, char **str)
{
	int i = 0;
	char *sstr = *str;

	sstr = strtok(*str, " -;+");
	if (sstr == NULL)
		return (NULL);
	while (sstr != NULL)
	{
		if (i < 2)
			arr[i] = sstr;
		sstr = strtok(NULL, " -;+");
		i++;
	}
	return ("good");
}
