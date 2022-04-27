#include<stlib.h>
#include"lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
listint_t *tmp = h;
while (tmp != NULL)
{
printf("%d", tmp->n);
tmp = tmp->next;
i++;
}
return (i);
}
