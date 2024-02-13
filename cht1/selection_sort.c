#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b);
int main() {
    int arr[10] = {3, 5, 8, 11, 15, 31, 50, 121, 1000, 1001};
 
    for (int i = 0; i < 9; i++) {
        int min_idx = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}