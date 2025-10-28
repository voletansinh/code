#ifndef VECTO_H
#define VECTO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int* data;
    int size;
    int capacity;
} Vector;

void vector_init(Vector* v);
void vector_free(Vector* v);
void vector_push_back(Vector* v, int value);
int vector_get(Vector* v, int index);
void vector_set(Vector* v, int index, int value);
void vector_pop_back(Vector* v);
void vector_remove_at(Vector* v, int index);
void vector_print(Vector* v);
int vector_size(Vector* v);

#endif

