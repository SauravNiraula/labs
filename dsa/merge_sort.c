#include <stdio.h>
#include <stdlib.h>


void printArray(int arr[], int len) {
	// int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *getArray(int *arr, int size, int start, int *tempArr) {	
	for(int i=0;i<size;i++) {
		tempArr[i] = arr[i+start];
	}
	return tempArr;
}

void merge(int *arr, int f, int m, int l) {
	// printArray(arr, 8);
	// printf(" f = %d, m = %d, l = %d \n", f,m,l);

	int s1, s2, *arr1, *arr2, i, j, k;
	s1 = m-f+1;
	s2 = l-m;

	int tempArr1[s1];
	int tempArr2[s2];

	// arr1 =(int*)calloc(s1, sizeof(int));
	// arr2 =(int*)calloc(s2, sizeof(int));

	arr1 = getArray(arr, s1, f, tempArr1);
	arr2 = getArray(arr, s2, m+1, tempArr2);

	// printArray(arr1, s1);
	// printArray(arr2, s2);

	i = j = 0;
	k = f;


	while (i < s1 && j < s2) {
		if (arr1[i] <= arr2[j]) {
			arr[k] = arr1[i];
			i++;
		}
		else {
			arr[k] = arr2[j];
			j++;
		}
		k++;
	}

	while (i < s1) {
		arr[k] = arr1[i];
		i++;
		k++;
	}

	while (j < s2) {
		arr[k] = arr2[j];
		j++;
		k++;
	}

	printArray(arr, 8);


}

void mergeSort(int *arr, int f, int l) {

	if (f < l) {

		int m = (f + l)/2;

		mergeSort(arr, f, m);
		mergeSort(arr, m+1, l);

		merge(arr, f, m, l);

	}

}


void main() {


	int arr[] = {12, 13, 15, 14, 21, 23, 25, 1};
    int len = sizeof(arr)/sizeof(arr[0]);

    // printArray(arr, len);
    mergeSort(arr, 0, len-1);


}