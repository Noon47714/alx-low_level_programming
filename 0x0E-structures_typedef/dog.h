#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 *  @name: Dog's name
 *  @age: Dog's age
 *  @owner: Dog's owner
 *
 *  Description: just a lone dog structer in a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif