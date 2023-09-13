#include "function_pointers.h"
/**
 *print_name- function name
 *
 *@name: name string
 *@(*f)(char *): pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);;
}
