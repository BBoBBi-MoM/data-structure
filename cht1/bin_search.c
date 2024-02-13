#include <stdio.h>


int main() {
    const int len_list = 10;
    int arr[10] = {1, 5, 8, 10, 15, 23, 27, 30, 51, 55};
    // int search_num = 15;
    int search_num = 14;

    int left_idx = 0;
    int right_idx = len_list - 1;
    int middle = (left_idx + right_idx) / 2;


    while (left_idx <= right_idx) {
        if (search_num < arr[middle]) {
            right_idx = middle - 1;
        }else if (search_num > arr[middle]) {
            left_idx = middle + 1;
        }else if (search_num == arr[middle]) {
            printf("idx: %d, value: %d", middle, arr[middle]);
            return 0;
            
        }
        middle = (left_idx + right_idx) / 2;
    }
    printf("djqtdma zz");



    return 0;
}
