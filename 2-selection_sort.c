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
	size_t i, j, i_idx, j_idx;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			tmp = array[i];
			if (tmp > array[j])
			{
				tmp = array[j];
				i_idx = i;
				j_idx = j;
			}
			j++;
		}
		i++;
		array[j_idx] = array[i_idx];
		array[i_idx] = tmp;
		print_array(array, size);
	}
}

