#include "monty.h"

/**
  * _pall - prints all the values on the stack, starting
  *          from the top of the stack.
  * @stack: the monty stack.
  * @line_number: opcode index.
  */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *process;
	(void)line_number;

	process = *stack;
	if (process = NULL)
		return;
	while (process != NULL)
	{
		printf("%d\n", process->n);
		process = process->next;
	}
}
