#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5,45,65};
    int arr2[]={6,7,8,9,10};

    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);

    int m=0;
    m=s1+s2;
    int array[m], tem=0;
    for(int i=0; i<s1; i++){
        array[i]=arr1[i];
    }
    for(int j=0; j<m; j++){
        array[s1+j]=arr2[tem];
        tem++;
    }
    printf("Merged two arrays\n");
    for(int k=0; k<m; k++ ){
        printf("%d ", array[k]);
    }
}