#include <stdio.h>

void sort(int *p, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (*(p + i) >*(p + j)) {
                // Swap elements at positions i and j
               *(p+i)=(*(p+i)+(*(p+j)))-(*(p+j)=(*(p+i)));
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
}

int main() {
    int arr[5];
    int *p = arr;
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++) {
        scanf("%d", p + i);
    }
    sort(p, size);

    return 0;
}
