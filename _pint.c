#include "monty.h"

/**
  * _pint - prints the value at the top of the stack,
  *           followed by a new line.
  * @stack: monty stack
  * @line_number: opcode index.
  *
  */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *process;

	process = *stack;
	if (process == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		error_exit(stack);
	}
	printf("%d\n", process->n);
}
