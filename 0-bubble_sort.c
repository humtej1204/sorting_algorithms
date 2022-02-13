#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: Array that contain the elements in a disorder way
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, a;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap */
				a = array[j];
				array[j] = array[j + 1];
				array[j + 1] = a;
				print_array(array, size);
			}
		}
	}
}
