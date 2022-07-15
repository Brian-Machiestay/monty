#include "monty.h"
/**
 * strseperate - check the code
 * @arr: the array to init
 * @str: the string to seperate
 * Return: the opcode or null
 */

char  *strseperate(char **arr, char *str)
{
	int i = 0;

	str = strtok(str, " ");
	if (str == NULL)
		return (NULL);
	while (str != NULL)
	{
		if (i < 2)
			arr[i] = str;
		str = strtok(NULL, " ");
		i++;
	}
	return ("good");
}
