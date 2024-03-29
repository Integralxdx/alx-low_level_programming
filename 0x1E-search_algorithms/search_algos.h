#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_binary(int *array, int value, size_t lo, size_t hi);
void array_print(int *array, size_t lo, size_t hi);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int help_binary(int *array, int value, size_t lo, size_t hi);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
