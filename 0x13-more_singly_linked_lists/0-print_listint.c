#include "lists.h"

/**
* print_listint - prints the elements in a linked list
*
* @h: list of type listint_t to be printed
*
* Return: number of nodes on the linked list
*/

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}

