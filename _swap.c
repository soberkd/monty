#include "monty.h"

/**
  * _swap - swaps the top two elements of the stack.
  * @stack: the monty stack
  * @line_number: opcode index
  *
  */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *process;
	int tmp, length = 0;

	process = *stack;
	while (process)
	{
		process = process->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	process = *stack;
	tmp = process->n;
	process->n = process->next->n;
	process->next->n = tmp;
}
