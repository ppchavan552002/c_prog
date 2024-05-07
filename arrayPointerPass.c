#include<stdio.h>
void passpointer( int *parr, int s){
    for(int i=0;i<s;i++){
        printf("%d ",*(parr+i));
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    passpointer(arr,5);
}