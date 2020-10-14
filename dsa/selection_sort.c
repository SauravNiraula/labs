#include <stdio.h>
// #include <stdbool.h>


void printArray(int arr[], int len) {
    for (int i = 0; i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int* getMinimum(int *arr, int len, int j) {
    int *min = &arr[j];
    for (int k = j+1; k<len; k++) {
        if (*min > arr[k]) {
            min = &arr[k];
        }
    }
    return min;
}

void sortArray(int *arr, int len) {
    for(int i = 0; i<len; i++) {
        int *min = getMinimum(arr, len, i);
        swap(min, &arr[i]);
    }
}


void main() {

    const int len = 8;
    int arr[8] = {12, 13, 15, 14, 21, 23, 25, 1};

    printArray(arr, len);
    sortArray(arr, len);
    printArray(arr, len);


}