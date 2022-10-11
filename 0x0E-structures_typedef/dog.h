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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
