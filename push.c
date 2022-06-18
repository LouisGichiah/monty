#include "monty.h"
/**
 *push - adds values on top of the stack
 *@stack:pointer to the stack doubly linked list
 *@line_number: line number of monty file to parse
 *Return:void
 */
void push(stack_t **stack, unsigned int line_number)
{
	int number, i = 0;
	char *n = mon.args[1];

	if (n == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		freer();
		exit(EXIT_FAILURE);
	}
	/*check if the string contains an integer*/
	while (n[i])
	{
		if ((is_no(n[i]) == 0 && n[i] != '-') || (n[i] == '-' && n[i + 1] == '\0'))
		{
			dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
			freer();
			exit(EXIT_FAILURE);
		}
		i++;
	}
	number = atoi(n);
	mon.args[1] = NULL;
	if (mon.stack_queue == 1)
		add_dnodeint_end(stack, number);
	else
		add_node_beg(stack, number);
}
