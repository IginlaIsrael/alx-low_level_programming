#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure of name age and owner
 * @name: A variable that stures names
 * @age: A variable that stores ages
 * @owner: A variable.
 *
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_doggy - a typedeffor the struct dog
 */
typedef struct dog my_doggy;

void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	my_doggy *new_dog(char *name, float age, char *owner);
	void free_dog(my_doggy *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);

#endif
