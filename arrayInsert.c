#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,0,0,0,0,0};
    int postion=2, element=10;
    for(int i=9;i>postion;i--){
        arr[i]=arr[i-1];
    }
    arr[postion]=element;
    for(int j=0;j<10;j++){
        printf("%d ", arr[j]);
    }
}