#ifndef DOG
#define DOG
#include "main.h"
/**
  * struct dog - Defines a structure for a dog
  *
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Name of owner of dog
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
