#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stddef.h>
#include <stdlid.h>

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif