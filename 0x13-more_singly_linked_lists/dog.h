#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 *struct dog - structure to define a dog
 *@name: dog's name
 *@owner: dog's owner
 *@age: dog's age
 *Description: A struct that stores the name, the owner and the age of a dog.
 */
struct dog
{
char *name;
char *owner;
float age;
};
#endif
