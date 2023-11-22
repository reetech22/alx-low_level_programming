#include "lists.h"

/**
* add_nodeint - adds a new node to the beginning of a linked list
*
* @head: pointer to first node in the list
*
* @n: data to put new node
*
* Return: pointer to new node, NULL on failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}

