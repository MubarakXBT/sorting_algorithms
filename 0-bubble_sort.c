#include "sort.h"
/**
 * bubble_sort - A program to bubble sort an array
 * @array: the set of unsorted arrays
 * @size: size of the array
 *
 * Return: Void
*/
void bubble_sort(int *array, size_t size)
{
	size_t temp, i, n = 0;

	while (n < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		n++;
	}
}
