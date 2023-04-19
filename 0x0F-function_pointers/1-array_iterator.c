#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator -  function .
 *@array: ptr to array .
 *
 *@size: size of the array .
 *
 *@action: ptr to function .
 *i => x
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{


	unsigned int x;


	if (!array || !action)
		return;


	for (x = 0; x < size; x++)
	{

		action(array[x]);

	}
}
