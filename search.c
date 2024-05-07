#include<stdio.h>
int find(int arr1[], int n){
    for(int i=0;i<5;i++){
        if(arr1[i]==n){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5],f;
    printf("enter Array Elements\n");
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    printf("enter Number you want to search\n");
    scanf("%d", &f);
    int ans=find(arr,f);
    if(ans==-1){
        printf("Number is not found");
    }else{
        printf("index of number %d", ans);
    }
    
    return 0;
}