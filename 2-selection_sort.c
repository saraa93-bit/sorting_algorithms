#include "sort.h"

/**
 * locate_min - Locatin the min From Current index in the array
 * @array: The Array to be Searched
 * @index: Starting Index of The Search
 * @size: The Size of The Array
 * Return: (int) index of min if found or
 * same given index if index is the min
 */

int locate_j(int *array, int index, size_t size)
{
	int j, idx_j;
	int i;

	j = array[index];
	idx_j = index;
	for (i = index; i < (int)size; i++)
	{
		if (array[i] < j)
		{
			j = array[i];
			idx_j = i;
		}
	}
	if (idx_j == index)
		return (-1);
	return (idx_j);
}

/**
 * selection_sort - Implementation of selection Sort Algrithme
 * @array: Array to sort type int *
 * @size: The Size of The Given Array
 *
 * Return: (Void) Sorted Array
 */
void selection_sort(int *array, size_t size)
{
	int i;
	int j, n;

	for (i = 0; i < (int)size; i++)
	{
		j = locate_j(array, i, size);
		if (j != -1)
		{
			n = array[i];
			array[i] = array[j];
			array[j] = n;
			print_array(array, size);
		}
	}
}
