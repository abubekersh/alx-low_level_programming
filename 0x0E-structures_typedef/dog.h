#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  define a structture called dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: define the structure dog with the three members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
#ifndef dog_t
#define dog_t struct dog
#endif
dog_t *new_dog(char *, float, char *);
#endif
