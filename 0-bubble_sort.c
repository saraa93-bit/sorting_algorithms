#include "sort.h"

/**
*bubble_sort: function that sorts an array ascending
*order using the Bubble sort algorithm.
*@array: an array of integers
*@size: size of array
*/

void bubble_sort(int *array, size_t size)
{
    int n;
    int i, j, size_t;
    
    if (size < 2)
    {
        return;
        }
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j > size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                n = array[j];
                array[j] = array[j + 1];
                array[j + 1] = n;
                print_array(array, size);
                }
        }
    }
}
