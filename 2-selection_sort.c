#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, j_idx;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i;
		j_idx = i;
		while (j < size)
		{
			if (array[j_idx] > array[j])
			{
				j_idx = j;
			}
			j++;
		}
		if (i != j_idx)
		{
			tmp = array[j_idx];
			array[j_idx] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
		i++;
	}
}

