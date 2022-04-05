#include "main.h"
#include <stdio.h>

/**
* create_array - a function that create a char array
* @size: size of array
* @c: character to initialize it to
*/

char *create_array(unsigned int size, char c)
{
char *arr = malloc(sizeof(char) * size);
arr[0] = c;
return (arr);
}
