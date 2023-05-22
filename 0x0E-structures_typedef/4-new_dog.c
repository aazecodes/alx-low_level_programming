#include "dog.h"
#include <stdlib.h>
/**
 * *_strcpy - copies string pointed to by src
  * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	for (a = 0; src[a] != '\0'; a++)
	{
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 * Return: pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len, len1;
	dog_t *dog;

	len = _strlen(name), len1 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
