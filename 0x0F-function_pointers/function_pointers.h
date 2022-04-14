#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));

#endif /* function_pointers.h */
