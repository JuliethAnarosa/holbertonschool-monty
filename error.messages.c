#include "monty.h"

/**
 *pint_error - prints an error message then exits
 *@line_number: the line number in the byte code file where
 *              the pint opcode is specified
 *Description: prints an error message when push there is no
 *             argument given to push or when a non-integer is given
 *Return: void
 */
void pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}