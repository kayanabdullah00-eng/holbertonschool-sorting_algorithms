#include "sort.h"

/**
 * swap_ints - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - partitions array using Lomuto scheme
 * @array: array of integers
 * @size: total size of array (for printing)
 * @low: starting index
 * @high: ending index
 *
 * Return: partition index
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] != array[high])
	{
		swap_ints(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
 * quick_sort_recursive - recursive quick sort
 * @array: array of integers
 * @size: total size of array
 * @low: starting index
 * @high: ending index
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, size, low, high);

		quick_sort_recursive(array, size, low, pivot_index - 1);
		quick_sort_recursive(array, size, pivot_index + 1, high);
	}
}

/**
 * quick_sort - sorts array using Quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, size, 0, size - 1);
}
