#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - Creates a new dog
  *
  * @name: Dog's name
  * @age: Dog's age
  * @owner: Dog's owner
  *
  * Return: Returns a pointer to the new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
