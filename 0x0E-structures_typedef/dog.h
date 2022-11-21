#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - description of a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner the dog
*
* Description: All the information could be declare with the struct
*/


struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *from, char *to);
void free_dog(dog_t *d);
#endif /* for _DOG_H_ */
