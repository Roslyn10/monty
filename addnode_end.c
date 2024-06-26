#include "monty.h"

/**
 * addnode_end - A function that adds a node at the bottom of the stack
 * Description - Adds a node to the bottom of the stack
 * @head: A pointer to a pointer to the head of the stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void addnode_end(stack_t **head, unsigned int counter)
{
	stack_t *newNode, *current;

	newNode = new_node(counter);

	if (*head == NULL)
	{
		*head = newNode;
		return;
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;
	newNode->prev = current;
}
