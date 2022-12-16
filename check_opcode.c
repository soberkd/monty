#include "monty.h"

/**
* execute - function that executes the opcode
* @stack: head stack linked list
* @counter: line count
* @file: pointer to monty file stream
* @content: line content
*
* Return: 0 or 1
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"nop", _nop},
		{NULL, NULL},
	};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (instruct[i].opcode && op)
	{
		if (strcmp(op, instruct[i].opcode) == 0)
		{	instruct[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && instruct[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_dlistint(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
