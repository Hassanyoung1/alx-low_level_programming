#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the new dog struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = strlen(name) + 1;
	int owner_len = strlen(owner) + 1;
	int i = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(name_len * sizeof(char));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	while (i < name_len)
	{
		name_copy[i] = name[i];
		i++;
	}
	i = 0;
	owner_copy = malloc(owner_len * sizeof(char));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	while (i < owner_len)
	{
		owner_copy[i] = owner[i];
		i++;
	}
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
