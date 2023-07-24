#include "sort.h"

/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 *bubble_sort - bubble sort algo
 * @array: ptr to the array.
 * @size: size of the array.
 */


void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int is_swaped;

	for (i = 0; i < size - 1; i++)
	{
		is_swaped = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				is_swaped = 1;

				print_array(array, size);

			}
		}

		if (is_swaped == 0)
			break;

	}

}



