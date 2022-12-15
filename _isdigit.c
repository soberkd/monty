#include "monty.h"

/**
  * _isdigit - check if the arg is a number
  * @str: the arg being passed
  *
  * Return: 1 if arg is a number, 0 otherwise
  */

int _isdigit(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
