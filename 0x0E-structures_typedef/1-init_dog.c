#include "dog.h"
#include <stdlib.h>
/**
* init_dog - a function that initialize a variable of type struct dog
*@d: dog's i.d
*@name: dog's name
*@age: dog's age
*@owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
