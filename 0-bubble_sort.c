#include "sort.h"

/**
* bubble_sort - sorts array of integers in ascending order
* uses Bubble Sort algorithm
* @array: array to be sorted
* @size: size of array
*
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag = 1;

	for (i = 0; i < size && flag; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
	}
}
