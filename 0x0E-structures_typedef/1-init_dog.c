#include "dog.h"

/**
*init_dog - initializes the variable in struct
*@d: pointer to a dog struct
*@name: name of dog
*@age: age of dog
*@owner: owner of the dog
*Return: void is return
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

(*d).name = name;
(*d).age = age;
(*d).owner = owner;

}


