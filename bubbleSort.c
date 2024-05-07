#include <stdio.h>

void selectionSort(int [], int);  
void bubbleSort(int [], int);    // method declaration

int main() {
     
     int arr[] = {85, 54, 25, 95, 62,13};
     int n=sizeof(arr)/sizeof(arr[0]);

     printf("Before sorting: \n");
     for(int i = 0; i < n; i++){
         printf("%d\t", arr[i]);
     }
     
     printf("\n");
    bubbleSort(arr, n);
    // selectionSort(arr, 5);

      printf("After sorting: \n");
      for(int i = 0; i < n; i++){
         printf("%d\t", arr[i]);
     }
   printf("\n");
}

void bubbleSort(int a[], int n){
    int passes, comp, temp;
    passes = n - 1;
    for(int i = 0; i < passes; i++){
          comp = n - i-1;
        for(int j = 0; j < n; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
   
}
void selectionSort(int a[], int n){
    int temp;
    for(int i = 0; i < n - 1; i++){
        int smallest = i;
        for(int j = i + 1; j < n; j++){
            if(a[smallest] > a[j]){
                smallest = j;
            }
        }
        if(i != smallest){
              temp = a[i];
              a[i] = a[smallest];
              a[smallest] = temp;
        }
    }
}