#include <stdio.h>
#include <stdbool.h>


bool sortArray(int *arr, int len) {
    return 0;
}

void printArray(int arr[], int len) {
    for (int i = 0; i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void main() {

    const int len = 8;
    int arr[8] = {12, 13, 15, 14, 21, 23, 25, 1};

    printArray(arr, len);
    
}