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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
