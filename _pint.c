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
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
