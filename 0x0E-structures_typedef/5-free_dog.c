#include <stdlib.h>
#include "dog.h"

/**
*free_dog - printing the dog struct
*@d: pointer to dog
*Return: void is return
*/

void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
