#include "dog.h"
#include <stdio.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the dog struct
 *
 * This function prints the name, age, and owner of a dog
 * using the provided dog struct pointer.
 * If any of the fields (name, owner) are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";


printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
return;
}
