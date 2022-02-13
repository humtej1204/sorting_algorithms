#ifndef HEADER
#define HEADER
/* Library */
#include <stdio.h>

/* Structures */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void change_pos(listint_t *p, listint_t *t);
int get_size(listint_t **list);

void rec_func(int *array, int start, int end, size_t size);
size_t lomuto_partition(int *array, int start, int end, size_t size);

#endif
