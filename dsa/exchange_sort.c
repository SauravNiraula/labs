#include <stdio.h>


void printArray(int arr[], int len) {
    for (int i = 0; i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int a[], int n) {
int *i, *j, temp;
int * const end = a + n;

    for(i = a; i < end-1; i++) {
        for(j = i + 1; j < end; j++) {
            if(*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
                printArray(a, n);
            }
        }
    }
}



void main() {

    const int len = 8;
    int arr[8] = {12, 13, 15, 14, 21, 23, 25, 1};

    printArray(arr, len);
    printf("Sorting! \n");
    sort(arr, len);
    // printArray(arr, len);
}