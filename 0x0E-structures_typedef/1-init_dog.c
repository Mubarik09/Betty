#include "dog.h"
/**
 * init_dog - Initializes a struct dog with provided values
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a string representing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a string representing the owner of the dog
 *
 * This function initializes the members of the struct dog pointed to by 'd'
 * with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->name = name;
d->age = age;
d->owner = owner;
}
