#include "monty.h"

/**
 * f_mod - Opcode that computes the remainder of the division...
 * of the first two codes
 * Description - Computes the remainder of the division of the top values
 * @head: Pointer to pointer to head of the stack
 * @counter: Number of lines
 * Return: No return (Nothing)
 */

void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack toi short\n", counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
