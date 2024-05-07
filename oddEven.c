#include<stdio.h>
int accptno(int a){
    if(a%2==0){
        printf("Entered Number is Even");
    }else{
        printf("enter Number is odd");
    }
}
int main(){
    int num;
    printf("enter No\n");
    scanf("%d", &num);
    accptno(num);
}