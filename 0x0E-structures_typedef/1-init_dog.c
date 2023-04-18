#ifndef DOG_H
#define DOG_H
/**
 *init_dog -  function that initialize a variable of type struct dog
 *@d: name
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
