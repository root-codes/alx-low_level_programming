#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block using malloc
 * @ptr: pointer to the momory
 * @old_size: size of the allocated space
 * @new_size: pointer to allocate new size memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		 n = old_size;
	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
