#ifndef FPTR_H
#define FPTR_H
typedef unsigned long int size_t;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
