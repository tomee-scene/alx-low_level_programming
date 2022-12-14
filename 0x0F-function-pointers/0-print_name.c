#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function to print name
 * @name: the parameter for the function
 * @f: the function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
