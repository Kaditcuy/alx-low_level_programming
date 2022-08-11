#include "lists.h"

/**
* print_list - Prints all elements of a list
* @h: pointer to first/head node in a list
*
* Return: The number of nodes in list
*/
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
