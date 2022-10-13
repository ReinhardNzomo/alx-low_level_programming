#include "function_pointer.h"
/**
* array_iterator- executes a function on each element of an array
* @array: array
* @size: size of array
* @action: function to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ((array = NULL) || (action == NULL) || (size == 0))
	{
		return;
	}

	while (size-- > 0)
	{
		action(array[i]);
		array++;
	}
}
