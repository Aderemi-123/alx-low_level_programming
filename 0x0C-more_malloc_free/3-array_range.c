#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - A function that creates an array of integers
 * @min: minimum number to start
 * @max: maximum number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *Aderemi;
	int tope, i;

	if (min > max)
		return (NULL);

	tope = max - min;
	Aderemi = malloc((tope + 1) * sizeof(int));
	if (Aderemi == NULL)
		return (NULL);

	for (i = 0; i <= tope; i++)
		Aderemi[i] = min++;

	return (Aderemi);
}
