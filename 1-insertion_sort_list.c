#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: Double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list, *tmp;

	/* Go Right */
	while (head->next)
	{
		if (head->n > (head->next)->n)
		{
			/*Change*/
			tmp = head->next;
			change_pos(head, head->next);
			/* Print the list */
			if (!tmp->prev)
				*list = tmp;
			print_list(*list);
			/* Go Left */
			while ((tmp->prev)->n > (tmp)->n && tmp->prev)
			{
				change_pos(tmp->prev, tmp);
				/* If we setting a value at the start */
				if (!tmp->prev)
					*list = tmp;
				/* Print the list */
				print_list(*list);
			}
			head = tmp;
		}
		head = head->next;
	}
}
/**
 * change_pos - Change the position of the elements
 *
 * @p: pointer of an element to change
 * @t: pointer of an element to change
 */
void change_pos(listint_t *p, listint_t *t)
{
	/*Verifying Extrems*/
	if (p->prev)
		(p->prev)->next = t;
	if (t->next)
		(t->next)->prev = p;
	/*Changing Outsides*/
	p->next = t->next;
	t->prev = p->prev;
	/*Changing Insides*/
	p->prev = t;
	t->next = p;
}
