#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - a function that prints a struct dog
* @d: a pointer
* Return: 0
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nil\n");
	else
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("nil\n");
	else
	printf("Owner: %s\n", d->owner);
}
