#include <stdio.h>
int main(){
    int arr[7],sum=0;
    printf("enter Array Element\n");
    for(int i=0; i<7; i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    sum=sum/10;
    printf("number are %d", sum);
}