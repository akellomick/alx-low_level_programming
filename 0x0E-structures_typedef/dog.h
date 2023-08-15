#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines elements of type dog.
 * @name: first element.
 * @age: second element.
 * @owner:third element.
 *
 * Description: defines elements name, age and owner of type dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
