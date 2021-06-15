#include "sort.h"

/**
* bubble_sort - sorts array of integers in ascending order
* @array: array to be sorted
* @size: size of array
*
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size && flag; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
