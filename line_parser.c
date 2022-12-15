#include "monty.h"

/**
 * line_parser - parses the opcode line.
 * @line: line to be parsed
 *
 * Return: opcode, null otherwise.
 */
char *line_parser(char *line)
{
	char *ocode;

	ocode = strtok(line, "\n ");
	if (ocode == NULL)
		return (NULL);
	return (ocode);
}
