#include "vecto.h"

#define VECTOR_INITIAL_CAPACITY 4

void vector_init(Vector* v) {
    v->size = 0;
    v->capacity = VECTOR_INITIAL_CAPACITY;
    v->data = (int*)malloc(v->capacity * sizeof(int));
    if (!v->data) {
        printf("Loi: Khong cap phat bo nho!\n");
        exit(1);
    }
}

void vector_free(Vector* v) {
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}

static void vector_resize(Vector* v, int new_capacity) {
    int* new_data = (int*)realloc(v->data, new_capacity * sizeof(int));
    if (!new_data) {
        printf("Loi: Khong cap phat lai bo nho!\n");
        exit(1);
    }
    v->data = new_data;
    v->capacity = new_capacity;
}

void vector_push_back(Vector* v, int value) {
    if (v->size == v->capacity)
        vector_resize(v, v->capacity * 2);
    v->data[v->size++] = value;
}

int vector_get(Vector* v, int index) {
    if (index < 0 || index >= v->size) {
        printf("Loi: Index %d khong hop le!\n", index);
        exit(1);
    }
    return v->data[index];
}

void vector_set(Vector* v, int index, int value) {
    if (index >= 0 && index < v->size)
        v->data[index] = value;
}

void vector_pop_back(Vector* v) {
    if (v->size > 0)
        v->size--;
}

void vector_remove_at(Vector* v, int index) {
    if (index < 0 || index >= v->size)
        return;
    memmove(&v->data[index], &v->data[index + 1], (v->size - index - 1) * sizeof(int));
    v->size--;
}

void vector_print(Vector* v) {
    printf("Vector (Size: %d, Capacity: %d)\nData: [ ", v->size, v->capacity);
    for (int i = 0; i < v->size; i++)
        printf("%d ", v->data[i]);
    printf("]\n\n");
}

int vector_size(Vector* v) {
    return v->size;
}

