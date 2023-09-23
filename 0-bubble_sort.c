#include "sort.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	bool done;

	while (true)
	{
		i = 0;
		done = true;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				done = false;
			}
			i++;
		}
		if (done)
			break;
	}
}

