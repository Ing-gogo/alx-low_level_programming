#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on each element of an array
 * @array: array used
 * @size: size of array
 * @action: function to perform on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size ; a++)
		action(array[a]);
}
