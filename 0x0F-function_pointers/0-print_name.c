#include "function_pointers.h"
#include <stdlib.h>



/**
 *print_name -  function that prints a name.
 *@name: ptr to char .
 *@f: ptr to function .
 */



void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

}
