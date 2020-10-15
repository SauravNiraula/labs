#include <stdio.h>

void printArray(int*, int);

void sortArray(int *arr, int len) {

    int key,i,j;

    for (i=1; i<len; i++) {
        key = arr[i];
        j = i-1;

        while (j>=0 && key<arr[j]) {
            arr[j+1] = arr[j];
            arr[j] = key;
            j--;
            printArray(arr, len);

        }

    }

}

void printArray(int arr[], int len) {
    for (int i = 0; i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void main() {

    int arr[] = {12, 13, 15, 14, 21, 23, 25, 1};
    int len = sizeof(arr)/sizeof(arr[0]);

    // printArray(arr, len);
    sortArray(arr, len);
}