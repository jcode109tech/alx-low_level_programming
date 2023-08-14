#ifndef DOG_H
#define DOG_H

/**
* struct dog - Dog details
* @name: char *
* @age: float
* @owner: char *
*Description: dog - struct for storing dog description
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */


