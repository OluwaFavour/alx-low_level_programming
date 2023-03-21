#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * _strlen - Returns the length of a string
  * @s: The string to compute
  *
  * Return: Returns the length of the string
  */
int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;
	return ((int)(p - s));
}

/**
  * _strcpy - Copied the string pointed to by src,
  * including the terminating null byte \0,
  * to the buffer pointed to by dest
  * @src: The source to copy from
  * @dest: The destination buffer to copy to
  *
  * Return: Returns a pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while ((*dest++ = *src++))
		;

	return (ret);
}

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
	int name_length, owner_length;

	name_length = owner_length = 0;
	if (name != NULL && owner != NULL)
	{
		name_length = _strlen(name) + 1;
		owner_length = _strlen(owner) + 1;
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);
		dog->name = malloc(sizeof(char) * name_length);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * owner_length);
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;

		return (dog);
	}
	return (NULL);
}
