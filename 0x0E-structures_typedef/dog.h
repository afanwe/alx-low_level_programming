#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains variable to hold details about each dog
 * @name: name of dog
 * @age: how old the dog is
 * @owner: who owns the name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
