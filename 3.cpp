#include "vecto.h"
#include <stdio.h>

int main() {
    Vector v_all;
    Vector v_even;

    vector_init(&v_all);
    vector_init(&v_even);

    int n;
    printf("Nhap cac so nguyen (nhap -1 de dung):\n");
    while (1) {
        scanf("%d", &n);
        if (n == -1)
            break;
        vector_push_back(&v_all, n);
    }

    for (int i = 0; i < vector_size(&v_all); i++) {
        int value = vector_get(&v_all, i);
        if (value % 2 == 0)
            vector_push_back(&v_even, value);
    }

    printf("\nDanh sach so chan:\n");
    vector_print(&v_even);

    vector_free(&v_all);
    vector_free(&v_even);

    return 0;
}

