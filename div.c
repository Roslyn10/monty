#include "monty.h"

/**
 * f_div - Opcode that divides the second value by the top value on the stack
 * Description - Divides the second value by the top value
 * @head: Pointer to pointer to head of the stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
