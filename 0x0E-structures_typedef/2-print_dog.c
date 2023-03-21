#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * print_dog - Prints a struct dog
  *
  * @d: The dog to be printed
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf(
				"Name: %s\nAge: %f\nOwner: %s\n",
				(d->name == NULL ? "nil" : d->name),
				d->age,
				(d->owner == NULL ? "nil" : d->owner)
		);
	}
	else
	{
		return;
	}
}
