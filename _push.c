#define DEFINE_VARIABLES
#include "monty.h"
#include "extern.h"

/**
  * _push - push int to a stack
  * @stack: the monty stack.
  * @line_number: the index of the opcode.
  */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	char *arg;
	int operand;

	operand = 0;

	tmp = (stack_t *)malloc(sizeof(stack_t));

	if (!tmp)
	{
		printf("Error: malloc failed\n");
		error_exit(stack);
	}

	arg = strtok(NULL, "\n ");

	if (_isdigit(arg) == 1 && arg != NULL)
	{
		operand = atoi(arg);
	}
	else
	{
		printf("L%d: usage: push integer\n", line_number);
		error_exit(stack);
	}

	if (global_var == 1)
	{
		add_dnodeint_end(stack, operand);
	}

	if (global_var == 0)
	{
		add_dnodeint(stack, operand);
	}

}
