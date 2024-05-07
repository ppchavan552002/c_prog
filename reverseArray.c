#include <stdio.h>
int main(){
    int arr[5];
    printf("enter Array Element\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("reverse Arrray\n");
    for(int i=4; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}