#ifndef _dog_h
#define _dog_h


/**
* struct dog - a dog type
* @name: char name of dog
* @age: age of dog in float
* @owner: string, owner
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

void free_dog(dog_t *d);

#endif
