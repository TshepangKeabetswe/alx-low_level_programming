#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: the dogs name
 * @age: sadly it wouldnt go beyond 20
 * @owner: the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

/*function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
