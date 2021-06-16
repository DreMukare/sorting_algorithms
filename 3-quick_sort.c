#include "sort.h"

/**
* quick_sort - sorts an array of integers in ascending order
* uses Quick Sort algorithm
* @array: array to be sorted
* @size: size of array
*
* Return: no return
*/
void quick_sort(int *array, size_t size)
{
	partition(array, 0, size - 1, size);
}

/**
* partition - recursively partitions the array
* @array: array to be partitioned
* @l_mkr: left marker/lower index
* @r_mkr: right marker/higher index
*
* Return: nothing
*/
void partition(int *array, int l_mkr, int r_mkr, size_t size)
{
	int pivot = array[r_mkr], i = (l_mkr - 1), j;

	if (r_mkr < l_mkr)
		return;

	for (j = l_mkr; j <= r_mkr - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[r_mkr]);
	print_array(array, size);
	partition(array, l_mkr, i, size);
	partition(array, i + 2, r_mk, size);
}

/**
* swap - swaps two array values
* @a: value one
* @b: value two
*
* Return: nothing
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
