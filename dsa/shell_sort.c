#include  <stdio.h> 


void printArray(int arr[], int len) {
    for (int i = 0; i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int shellSort(int arr[], int n) 
{ 
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        for (int i = gap; i < n; i += 1) 
        { 
            int temp = arr[i]; 
  
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap]; 

                printArray(arr, n);
            }
              
            arr[j] = temp; 
        } 
    } 
    return 0; 
} 
  

  
int main() 
{ 
    int arr[] = {12, 13, 15, 14, 21, 23, 25, 1};
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    printArray(arr, n); 
    printf("Sorting! \n");
    shellSort(arr, n); 
  
    return 0; 
} 