#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: Array that contain the elements in a disorder way
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	int *p, *t, x, tmp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		p = &array[i];
		x = 0;
		/* Select the min value */
		for (j = i + 1; j < size; j++)
		{
			t = &array[j];
			/**
			 * Changing position of the first pointer
			 * if a minor value is found
			 */
			if (*p > *t)
			{
				p = t;
				x = j;
			}
		}
		/* Make a Change only if a minor value is found */
		if (x != 0)
		{
			tmp = array[i];
			array[i] = *p;
			array[x] = tmp;
			print_array(array, size);
		}
	}
}
