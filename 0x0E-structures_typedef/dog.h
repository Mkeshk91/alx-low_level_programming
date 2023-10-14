#ifndef DOG_H

#define DOG_H
/**
 * struct dog - dog basic info.
 *
 * @name: 1st member
 * @age:2nd  member
 * @owner: 3rd  member
 *
 * Desript: Longer descript.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef to struct dog.
 *
 */
typedef struct dog dog_t;
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);

void print_dog(struct dog *d);

void free_dog(dog_t *d);
#endif
