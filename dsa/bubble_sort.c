#include <stdio.h>
#include <stdbool.h>


bool sortArray(int *arr, int len) {
    int temp;
    bool swapped = 0;
    for(int i = 0; i<len-1; i++) {
    //    if(arr[i] > arr[i+1]) {
    //        temp = arr[i];
    //        arr[i] = arr[i+1];
    //        arr[i+1] = temp;
    //        swapped = 1;
    //    }

        int *arrPointer = arr+i;

       if(*(arrPointer) > *(arrPointer+1)) {
           temp = *(arrPointer);
           *(arrPointer) = *(arrPointer+1);
           *(arrPointer+1) = temp;
           swapped = 1;
       }
    }
    return swapped;
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
    printf("Sorting! \n");
    int iteration = 1;
    while(sortArray(&arr[0], len)) {
        printf("%d iteration \n", iteration);
        printArray(arr, len);
        iteration++;
    }
}