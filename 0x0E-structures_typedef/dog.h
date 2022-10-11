#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A declaration of the struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: It contains differrent element of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
