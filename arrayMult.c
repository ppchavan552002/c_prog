#include <stdio.h>
int main(){
    int arr[5];
    printf("enter Array Element\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
        arr[i]=arr[i]*3;
    }
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
}