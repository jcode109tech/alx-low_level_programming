#include <stdlib.h>
#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog
* @d: his parameter is a pointer to a structure of type struct do
* @name: name of the dog.
* @age: age in years, must be greater than 0 and less or equal to 15.
* @owner: owner of dog.
* Description:
* Return:
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;
}


