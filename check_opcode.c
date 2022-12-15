#include "monty.h"

/**
 * check_op_code -  checks opcode and execute it.
 * @str: the opcode
 *
 * Return: function, NULL otherwise
 */
instruct_func check_opcode(char *str)
{
	int i;

	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"nop", _nop},
		{NULL, NULL},
	};

	i = 0;
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0)
	{
		i++;
	}

	return (instruct[i].f);
}
