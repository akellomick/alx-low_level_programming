#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog- type struct dog
 * @name: firstMember
 * @age: secondMember
 * @owner: thirdMember
 *
 * Description: defines a tupe struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t: typedef for dog.
 *
 * Description: Defines type dog_t as a new name for the type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
