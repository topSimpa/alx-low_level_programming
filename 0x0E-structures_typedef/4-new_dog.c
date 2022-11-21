#include "dog.h"
#include <stdlib.h>
#include <math.h>

/**
 * _strlen - count the length of a string
 * @str: char pointer to strings frist address
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copy one string into another
 * @from: char pointer to string to copy from
 * @to: char pointer to string to copy to
 * Return: void
 */

char *_strcpy(char *from, char *to)
{
	int i = 0;

	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
	return (to);
}


/**
*new_dog - initializes the variable in struct
*@name: name of dog
*@age: age of dog
*@owner: owner of the dog
*Return: pointer to a struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}


	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcpy(name, d->name);

	d->age = age;

	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = _strcpy(owner, d->owner);

	if (d && name != NULL && (age != 0 || age != NAN) && owner != NULL)
	{
		return (d);
	}
	return (NULL);
}


