#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores information of dogs.
 * @name: name of the dog
 * @age: current age of the dog
 * @owner: owner's name
 *
 * Description: struct that stores the specific kinds of
 * information that were looking for with dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the new name of
 * struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
