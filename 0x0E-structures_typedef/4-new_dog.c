#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>


/**
 * *_strcpy - Copy the given string
 * @dest: Holds address to copy string data
 * @src: Holds String data to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}


/**
 * new_dog - creates a new struct of type dog
 * @name: Holds struct data for name
 * @age: Holds struct data for age
 * @owner: Holds struct data for owner
 *
 * Return: returns pointer to buffer of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	len = 0;
	while (name[len] != '\0')
		len++;
	len++;
	new_name = malloc(len * sizeof(*owner));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	len = 0;
	while (name[len] != '\0')
		len++;
	len++;
	new_owner = malloc(len * sizeof(*name));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
