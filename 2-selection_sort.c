#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * @array: the array of the elements
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, j, k;

	while (i < size)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
				k = j;
		}

		if (i != k)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
		i++;
	}
}
