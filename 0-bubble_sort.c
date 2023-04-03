#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: the array of ints
 * @size: the size of the @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, flag = 1;

	if (size < 2)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
