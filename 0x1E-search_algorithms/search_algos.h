#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *arr, size_t left, size_t right);

#endif
