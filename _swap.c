#define DEFINE_VARIABLES
#include "monty.h"
#include "extern.h"

/**
  * _swap - swaps the top two elements of the stack.
  * @stack: the monty stack
  * @line_number: opcode index
  *
  */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *process;
	int tmp;

	process = *stack;
	if (process == NULL || process->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		error_exit(stack);
	}
	tmp = process->n;
	process->n = process->next->n;
	process->next->n = tmp;
}
